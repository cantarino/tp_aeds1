
/************************************************
LAED1 - Trabalho Pratico 2
Alunos:Christian Medeiros Cantarino
       João Victor Duarte Mazagão Rodrigues
Matricula:201722040130
          201722040378
Descricao do programa:Algoritmo de ordenacao bubble sort
Data:14/11/2018
************************************************/


#include <stdio.h>
#include "item.h"

#ifndef bubbleSort_h
#define bubbleSort_h

void Bubblesort(TipoItem *A, int tam){
   int i, j;
   TipoItem aux;
   //Ao final de cada iteracao o j-esimo maior item e colocado na n-j posicao
   for (j=0; j<tam-1; j++){
      for (i=0; i<tam-1; i++){
         //Se o item for maior que o sucessor, troca
         if (A[i].Chave > A[i+1].Chave){
            aux = A[i];
            A[i] = A[i+1];
            A[i+1] = aux;
         }
      }
   }
}

#endif //TP_AEDS1_BUBBLESORT_H
