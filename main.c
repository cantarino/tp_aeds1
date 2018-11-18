/************************************************
LAED1 - Trabalho Pratico 2
Alunos:Christian Medeiros Cantarino
       João Victor Duarte Mazagão Rodrigues
Matricula:201722040130
          201722040378
Descricao do programa:Arquivo principal aonde os algoritmos serão executados
Data:15/11/2018
************************************************/

#include <stdio.h>
#include "item.h"
#include "bubbleSort.h"
#include "selectionSort.h"
#include "isertionSort.h"
#include "mergeSort.h"
#include "heapSort.h"

int main() {
    TipoItem * A;
    int n;
    printf("Digite quantos itens deseja em seu arranjo:");
    scanf("%d",&n);
    A = geraItensAleatorios(n);
    heapSort(A, n);
    Imprime(A,n);
    return 0;
}