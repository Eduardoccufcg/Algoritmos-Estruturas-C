/* Algoritmo de ordenação Merge Sort */

#include <stdio.h>
#include "util.h"

void mergeSort();
void merge();
int  statistics();

int main(){

    int vet1[4] = {5,7,10,12};
    int vet2[5] = {4,6,13,17,19};
   printf("%d",statistics(8,vet1,vet2));
    //mergeSort(vett,0,12);
    //int i;
    //for( i = 0 ; i <= 12; i++)
    //  {
    //    printf("vett[%d] = %d\n",i, vett[i]);
    //  }
}

void mergeSort(int array[],int leftIndex,int rightIndex){

    if(leftIndex < rightIndex){
        int m = (leftIndex + rightIndex) / 2;
        mergeSort(array, leftIndex, m);
        mergeSort(array, m + 1, rightIndex);

        merge(array,leftIndex,m,rightIndex);

    }

}

int statistics(int estatistica, int array1[], int array2[]){

    int array1T = 4;
    int array2T = 5;
    int i = 0;
    int j = 0;
    int num;
    int k = 1;

    while(k <= estatistica && i < array1T  && j < array2T){
            if(array1[i] <= array2[j]){
                num = array1[i];
                i++;

            }else{
                num = array2[j];
                j++;

            }
            k++;
        }
     while(i < array1T && k <= estatistica){
         num = array1[i];
         i++;
         k++;


     }

    while(j < array2T && k <= estatistica){
          num = array2[j];
          j++;
          k++;

    }



    return num;




}






void merge(int array[], int l,int m, int r){
    /*ARRAYS TEMPORARIOS*/
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1];
    int R[n2];
    for(int i = 0; i < n1; i++){
        L[i] = array [l + i];
    }
    for(int j = 0; j < n2; j++){
         R[j] = array [m + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = l;


    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
            array[k] = L[i];
            i++;
        }else{
            array[k] = R[j];
            j++;
        }
        k++;
    }

    while(i < n1){
        array[k] = L[i];
        i++;
        k++;
    }

    while(j < n2){
            array[k] = R[j];
            j++;
            k++;
        }


}