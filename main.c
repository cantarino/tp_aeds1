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
#include "medirTempo.h"
#include "item.h"
#include "selectionSort.h"
#include "mergeSort.h"
#include "orderVerification.h"
#include "heapSort.h"
#include "isertionSort.h"
#include "bubbleSort.h"

int main() {
    clock_t t0,tf;
    TipoItem * A;
   // medeTempo tempo;
    int n;
    //inicia(tempo);

    t0 = clock();
    printf("Digite quantos itens deseja em seu arranjo:");
    scanf("%d",&n);

    A = geraItensAleatorios(n);
    Selecao(A,n);
    verificaOrdenacao(A,n);
    tf = clock();

    double  tempo_gasto = ( (double) (tf - t0) ) / CLOCKS_PER_SEC;
    printf("Tempo gasto: %lf s\n", tempo_gasto);

    //printTempo(tempo);
    return 0;

}