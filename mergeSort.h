/************************************************
LAED1 - Trabalho Pratico 2
Alunos:Christian Medeiros Cantarino
       João Victor Duarte Mazagão Rodrigues
Matricula:201722040130
          201722040378
Descricao do programa:Arquivo principal aonde os algoritmos serão executados
Data:15/11/2018
************************************************/
// codigo baseado no site https://www.geeksforgeeks.org/merge-sort/

#include "item.h"
#include <stdio.h>

#ifndef TP_AEDS1_MERGESORT_H
#define TP_AEDS1_MERGESORT_H

void merge (TipoItem *A, int l, int m, int r){
    int i, j, k;
    int n1 = m - l +  1;
    int n2 = r-m;

    //create arrays

    TipoItem aux[n1], aux2[n2];

    //cpy data to temp

    for (i = 0; i < n1; i++)
        aux[i] = A[l+i];

    for (int j = 0; j < n2 ; j++)
        aux2[j] = A[m + 1 + j];

    //merge

    i = 0;
    j = 0;
    k = l;

    while(i < n1 && j < n2){
        if (aux[i].Chave <= aux2[j].Chave){
            A[k] = aux[i];
            i++;
        } else {
            A[k] = aux2[j];
            j++;
        }
        k++;
    }


    while (i < n1){
        A[k] = aux[i];
        i++;
        k++;
    }

    while (j < n2){
        A[k] = aux2[j];
        j++;
        k++;
    }
}

void mergeSort(TipoItem *a, int l, int r){
    if (l < r){
        int m = (l+r-1)/2;

        mergeSort(a,l,m);
        mergeSort(a,m+1,r);

        merge(a,l,m,r);
    }
}

#endif //TP_AEDS1_MERGESORT_H
