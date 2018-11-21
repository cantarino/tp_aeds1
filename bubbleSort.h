
/************************************************
LAED1 - Trabalho Pratico 2
Alunos:Christian Medeiros Cantarino
       João Victor Duarte Mazagão Rodrigues
Matricula:201722040130
          201722040378
Descricao do programa:Algoritmo de ordenacao bubble sort
Data:14/11/2018
************************************************/
//otimização do bublesort retirado do site https://www.geeksforgeeks.org/bubble-sort/

#include <stdio.h>
#include "item.h"

#ifndef bubbleSort_h
#define bubbleSort_h


void swap(TipoItem *a,  TipoItem *b){
   TipoItem temp = *a;
   *a = *b;
   *b = temp;
}


void bubbleSort(TipoItem *a, int n){
   //set 0 = false, 1 = true;
   int i, j, swapped;

   for(i = 0;  i < n-1;i++){
      swapped = 0;
      for(j=0 ; j < n-i-1; j++){
          if (a[j].Chave > a[j+1].Chave) {
              swap(&a[j], &a[j + 1]);
              swapped = 1;
          }
      }

      if (swapped == 0)
         break;
   }
}

#endif //TP_AEDS1_BUBBLESORT_H
