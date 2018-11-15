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

int main() {
    TipoItem * A;
    int n;
    printf("Digite quantos itens deseja em seu arranjo:");
    scanf("%d",&n);
    printf("\n****Bubble sort****");
    printf("\n*Itens aleatorios*\n\nArranjo original:");
    A = geraItensAleatorios(n);
    Bubblesort(A,n);
    printf("\nArranjo Organizado:");
    Imprime(A,n);
    printf("\n*Itens Ordenados*\n\nArranjo original:");
    A = geraItensOrdenados(n);
    Bubblesort(A,n);
    printf("\nArranjo Organizado:");
    Imprime(A,n);
    printf("\n*Itens Inversamente Ordenados*\n\nArranjo original:");
    A = geraItensInversamenteOrdenados(n);
    Bubblesort(A,n);
    printf("\nArranjo Organizado:");
    Imprime(A,n);
    printf("\n*Itens Quase Ordenados*\n\nArranjo original:");
    A = geraItensQuaseOrdenados(n);
    Bubblesort(A,n);
    printf("\nArranjo Organizado:");
    Imprime(A,n);
    return 0;
}