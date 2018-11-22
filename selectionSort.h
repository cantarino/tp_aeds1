/************************************************
LAED1 - Trabalho Pratico 2
Alunos:Christian Medeiros Cantarino
       João Victor Duarte Mazagão Rodrigues
Matricula:201722040130
          201722040378
Descricao do programa:Arquivo principal aonde os algoritmos serão executados
Data:21/11/2018
************************************************/

#include <stdio.h>
#include "item.h"

#ifndef TP_AEDS1_SELECTIONSORT_H
#define TP_AEDS1_SELECTIONSORT_H
/*
 * Codigo, retirado do ziviani, e dos slides da professora Nathalia de AEDS1
 *
 * Codigo foi muito modificado com guias da internet e fiz bagunça com o codigo para tentar fazer o numero de comparações corretas
 * e os numeros de trocas corretas. Então não tenho mais certeza de qual codigo foi retirado, e se ao passar pelo programinha de plagio
 * acusar algum codigo diferente do Ziviani, com certeza foi ele que me baseei.
 *
 * Lembrando que a maioria dos meus codigos foram baseado nos codigos do Geeks4Geeks, então provavelmente é de la.
 *
 * Considerações que não irão alterar a execução do codigo
 *
 *      TipoIndice no livro texto era um inteiro, então estamos considerando um inteiro.
 *
 */


void Selecao(TipoItem *A, int n){
    // Codigo comentado no final do arquivo

    int i;
    int j;
    int min;
    int trocas = 0;
    int comparacoes = 0;
    TipoItem x;

    for (i = 0; i < n -1; i++){
        min = i;
        x = A[min];
        for (j = i+1; j < n ; j++) {
            if (A[j].Chave < A[min].Chave)  min = j;
            comparacoes++;
        }


            if (x.Chave != A[min].Chave){
                trocas++;
                x = A[min];
                A[min] = A[i];
                A[i] = x;
            }

    }

    printf("Comparações: %d \n\n", comparacoes);
    printf("Trocas: %d\n\n", trocas);
}

#endif //TP_AEDS1_SELECTIONSORT_H
