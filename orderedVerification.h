//
// Created by jvmazagao on 18/11/18.
//
#include "item.h"
#include <stdio.h>
#include <stdbool.h>

#ifndef UNTITLED_ORDEREDVERIFICATION_H
#define UNTITLED_ORDEREDVERIFICATION_H

void verificaOrdenacao (TipoItem *a, int n){
    int i;
    int j = 1;

    for (i = 0; i < n; i++){
        if (a[i].Chave < a[i+1].Chave) {
            j++;
        }
    }

    if(j == n){
        printf("Vetor Ordenado\n");
    } else {
        printf("Vetor Não Ordenado\n");
    }
}

#endif //UNTITLED_ORDEREDVERIFICATION_H
