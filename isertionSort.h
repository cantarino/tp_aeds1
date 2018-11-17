/************************************************
LAED1 - Trabalho Pratico 2
Alunos:Christian Medeiros Cantarino
       João Victor Duarte Mazagão Rodrigues
Matricula:201722040130
          201722040378
Descricao do programa:Arquivo principal aonde os algoritmos serão executados
Data:17/11/2018
************************************************/

#include "item.h"
#include <stdio.h>
#ifndef TP_AEDS1_ISERTIONSORT_H
#define TP_AEDS1_ISERTIONSORT_H

/*
 * codigo adaptado do site geeks for geeks link abaixo
 *  https://www.geeksforgeeks.org/insertion-sort/
 */

void Insercao (TipoItem * a, int n){
    TipoItem x;
    int i = 0, j = 0;

    for (i = 1; i <= n - 1; i++) {
        x = a[i];
        j = i -1;
        while(j>=0 && a[j].Chave > x.Chave){
            a[j+1] = a[j];
            j = j -1;
        }

        a[j+1] = x;
    }
}

#endif //TP_AEDS1_ISERTIONSORT_H
