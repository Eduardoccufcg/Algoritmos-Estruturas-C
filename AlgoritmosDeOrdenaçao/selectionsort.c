/* Algoritmo de ordenação Selection Sort */

#include <stdio.h>
#include "util.h"

void selectionSort();
int main(){
    int vett[13] = {7,5,3,1,2,9,155,85,-5,2,0,1,9};
    selectionSort(vett,0,12);
    int i;
    for( i = 0 ; i <= 12; i++)
      {
        printf("vett[%d] = %d\n",i, vett[i]);
      }
}

void selectionSort(int vet[],int leftIndex,int rightIndex){
    int k,minIndex,i;
    for(k = leftIndex; k < rightIndex;k++){
        minIndex = k;
        for(i = k + 1; i <= rightIndex; i++){

            if(vet[i] < vet[minIndex]){
                minIndex = i;
            }

        }
        swap(&vet[minIndex],&vet[k]);
    }


}
