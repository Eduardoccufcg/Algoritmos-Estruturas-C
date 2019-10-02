/* Algoritmo de ordenação Bubble Sort */

#include <stdio.h>
#include "util.h"

void bubbleSort();
int main(){
    int vett[13] = {7,5,3,1,2,9,1,85,-5,2,0,1,9};
    bubbleSort(vett,0,12);
    int i;
    for( i = 0 ; i <= 12; i++)
      {
        printf("vett[%d] = %d\n",i, vett[i]);
      }
}

void bubbleSort(int vet[],int leftIndex,int rightIndex){
    int i,j,boole;
    for(i = leftIndex; i <= rightIndex; i++){
        boole = 0;
        for(j = leftIndex; j < rightIndex; j++){
            if(vet[j] > vet[j+1]){
                 swap(&vet[j], &vet[j+1]);
                 boole = 1;
            }
        }
        if(!boole){
            break;
        }


    }
}