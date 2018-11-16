//
// Created by jvmazagao on 14/11/18.
//
#include <stdio.h>
#include "item.h"

#ifndef TP_AEDS1_SELECTIONSORT_H
#define TP_AEDS1_SELECTIONSORT_H



void Selecao(TipoItem *A, int n){
    int i;
    int j;
    int min;

    TipoItem x;

    for (i = 1; i <= n -1; i++){
        min = i;
        for (j = i+1; j < n ; j++) {
            if(A[i].Chave < A[min].Chave)
                min = j;
            x = A[min];
            A[min] = A[i];
            A[i] = x;
        }
    }
}

#endif //TP_AEDS1_SELECTIONSORT_H