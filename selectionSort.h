//
// Created by jvmazagao on 14/11/18.
//
#include "typeCode.h"
#ifndef TP_AEDS1_SELECTIONSORT_H
#define TP_AEDS1_SELECTIONSORT_H

#endif //TP_AEDS1_SELECTIONSORT_H

void Selecao(TipoItem ∗A, TipoIndice n){
    TipoIndice i , j , Min;
    TipoItem x;

    for ( i = 1; i <= n−1; i++){
        Min = i ;
        for ( j = i + 1; j <= n; j++)
            if (A[ j ] .Chave < A[Min] .Chave)
                Min = j;
                x = A[Min];
                A[Min] = A[ i ];
                A[ i ] = x;
    }
}