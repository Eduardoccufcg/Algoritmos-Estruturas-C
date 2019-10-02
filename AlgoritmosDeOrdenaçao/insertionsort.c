/* Algoritmo de ordenação Insertion Sort */

#include <stdio.h>
#include "util.h"

void insertionSort();
int main(){
    int vett[13] = {7,5,3,1,2,9,1,85,-5,2,0,1,9};
    insertionSort(vett,0,12);
    int i;
    for( i = 0 ; i <= 12; i++)
      {
        printf("vett[%d] = %d\n",i, vett[i]);
      }
}

void insertionSort(int vet[],int leftIndex,int rightIndex){
   int i,j,aux;
   for(i = leftIndex + 1; i <= rightIndex; i++){
        aux = vet[i];
        j = i - 1;
        while(j >= leftIndex && vet[j] > aux){
            vet[j+1] = vet[j];
            j--;
        }
        vet[j+1] = aux;

   }

}
