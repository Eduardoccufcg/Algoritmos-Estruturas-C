#include "util.h"
#include <stdio.h>

void quickSort();
int partition();
int main(){
    int vett[13] = {7,5,3,1,2,9,1,85,-5,2,0,1,9};
    quickSort(vett,0,12);
    int i;
    for( i = 0 ; i <= 12; i++)
      {
        printf("vett[%d] = %d\n",i, vett[i]);
      }
}

void quickSort(int array[],int leftIndex,int rightIndex){
    if(leftIndex < rightIndex){
        int m = partition(array,leftIndex,rightIndex);
        quickSort(array,leftIndex,m-1);
        quickSort(array,m+1,rightIndex);

    }

}

int partition(int array[],int leftIndex,int rightIndex){

    int pivot = array[leftIndex];

    int i = leftIndex;

    for(int j = leftIndex + 1; j <= rightIndex; j++){
        if(array[j] <= pivot){
            i++;
            swap(&array[i],&array[j]);

        }


    }
    swap(&array[i],&array[leftIndex]);
    return i;


}

