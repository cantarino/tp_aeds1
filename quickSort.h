/************************************************
LAED1 - Trabalho Pratico 2
Alunos:Christian Medeiros Cantarino
       João Victor Duarte Mazagão Rodrigues
Matricula:201722040130
          201722040378
Descricao do programa:Arquivo principal aonde os algoritmos serão executados
Data:15/11/2018
************************************************/

// codigo implementado com base na referencia de https://beginnersbook.com/2015/02/quicksort-program-in-c/


#include <stdio.h>
#include "item.h"

#ifndef TP_AEDS1_QUICKSORT_H
#define TP_AEDS1_QUICKSORT_H

void quickSort (TipoItem * a, int first, int last){
    int i, j,pivo;
    TipoItem temp;

    if(first < last){
        pivo = first;
        i = first;
        j = last;

        while(i <j){
            while (a[i].Chave <= a[pivo].Chave && i < last) i++;
            while (a[j].Chave > a[pivo].Chave)  j--;

            if (i < j){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

        temp = a[pivo];
        a[pivo] = a[j];
        a[j] = temp;

        quickSort(a,first,j-1);
        quickSort(a,j+1, last);
    }
}
#endif //TP_AEDS1_QUICKSORT_H
