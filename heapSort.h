/************************************************
LAED1 - Trabalho Pratico 2
Alunos:Christian Medeiros Cantarino
       João Victor Duarte Mazagão Rodrigues
Matricula:201722040130
          201722040378
Descricao do programa:Arquivo principal aonde os algoritmos serão executados
Data:15/11/2018
************************************************/
// codigo adaptado do site https://www.sanfoundry.com/c-program-implement-heap-sort/


#include "item.h"
#include <stdio.h>

#ifndef TP_AEDS1_HEAPSORT_H
#define TP_AEDS1_HEAPSORT_H

void  max_heapify(TipoItem *a, int i, int n)
{
    int largest;
    TipoItem tmp;
    int l = (2 * i) + 1;
    int r = (2 * i) + 2;
    if ((l <= n-1) && (a[l].Chave > a[i].Chave))
        largest = l;
    else
        largest = i;
    if ((r <= n-1) && (a[r].Chave > a[largest].Chave))
        largest = r ;
    if (largest != i)
    {
        tmp = a[i];
        a[i] = a[largest];
        a[largest] = tmp;
        max_heapify(a, largest, n);
    }

}
void  build_max_heap(TipoItem * a, int n)
{
    int i;
    for (i = n/2; i >= 0; i--)
    {
        max_heapify(a, i, n);
    }

}
void heapSort(TipoItem * a, int n)
{
    int i;
    TipoItem tmp;
    build_max_heap(a, n);

    for (i = n-1; i >= 0; i--)
    {
        tmp = a[i];
        a[i] = a[0];
        a[0] = tmp;
        n--;
        max_heapify(a, 0, n);
    }
}


#endif //TP_AEDS1_HEAPSORT_H

