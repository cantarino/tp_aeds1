/************************************************
LAED1 - Trabalho Pratico 2
Alunos:Christian Medeiros Cantarino
       João Victor Duarte Mazagão Rodrigues
Matriculas:201722040130
          201722040378
Descricao do programa:Header file do tipo item, definindo-o e suas funcoes 
Data:15/11/2018
************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifndef item_h
#define item_h

//Define o TipoChave,TipoCampo e o TipoItem 

//TipoChave sera utilizado para ordenar os itens
//TipoCampo sera utilizado como um campo secundario
typedef long TipoChave;
typedef long TipoCampo;
typedef struct TipoItem {
  TipoChave Chave;
  TipoCampo Campo;
} TipoItem;

//Imprime os itens
void Imprime(TipoItem * A, int tam){
    int i;
    printf("\n");
    for(i=0;i<tam;i++){
        printf("    Item de numero %d:\n",i+1);
        printf("    Chave - %ld\n",A[i].Chave);
        printf("    Campo - %ld\n\n",A[i].Campo);
    }
}

//Gera itens aleatorios
TipoItem * geraItensAleatorios (int n){
    //Gera seed aleatoria
    srand((unsigned)time(NULL));
    int i;
    TipoItem * A;
    A = (struct TipoItem*)malloc(n*sizeof(struct TipoItem));
    for(i=0;i<n;i++){
        //Chave tem valor entre 0 e n*1000
        A[i].Chave = rand()%(n*1000);
        //Campo tem valor entre 0 e 100
        A[i].Campo = rand()%100;
    }
    Imprime(A,n);
    //Retorna o numero de itens
    return A;
}

//Gera itens ordenados
TipoItem * geraItensOrdenados (int n){
    //Gera seed aleatoria
    srand((unsigned)time(NULL));
    TipoItem * A;
    int i;
    A = (struct TipoItem*)malloc(n*sizeof(struct TipoItem));
    for(i=0;i<n;i++){
        //Chave tem valor de i+1
        A[i].Chave = i+1;
        //Campo tem valor entre 0 e 100
        A[i].Campo = rand()%100;
    }
    Imprime(A,n);
    return A;
}

//Gera itens inversamente ordenados
TipoItem * geraItensInversamenteOrdenados (int n){
    //Gera seed aleatoria
    srand((unsigned)time(NULL));
    int i;
    TipoItem * A;
    A = (struct TipoItem*)malloc(n*sizeof(struct TipoItem));
    for(i=0;i<n;i++){
        //Chave tem valor de n-i
        A[i].Chave = n-i;
        //Campo tem valor entre 0 e 100
        A[i].Campo = rand()%100;
    }
    Imprime(A,n);
    //Retorna o numero de itens
    return A;
}

//Gera itens quase ordenados
TipoItem * geraItensQuaseOrdenados (int n){
    //Gera seed aleatoria
    srand((unsigned)time(NULL));
    int i;
    TipoItem * A;
    A = (struct TipoItem*)malloc(n*sizeof(struct TipoItem));

    //O inicio do vetor (primeiros 10%) vao ter valores aleatorios de 0 a n
    for(i=0;i<(n*0.1);i++){
        //Chave tem valor entre 1 e n
        A[i].Chave = rand()%n + 1;
        //Campo tem valor entre 0 e 100
        A[i].Campo = rand()%100;
    }

    //O meio do vetor (ate 90%) vai ser organizado
   while(i<(n*0.9)){
        //Chave tem valor igual a i+1
        A[i].Chave = i+1;
        //Campo tem valor entre 0 e 100
        A[i].Campo = rand()%100;
        i++;
    }

    //O fim do vetor (ultimos 10%) vao ter valores aleatorios de 0 a n
    while(i<n){
        //Chave tem valor entre 1 e n
        A[i].Chave = rand()%n + 1;
        //Campo tem valor entre 0 e 100
        A[i].Campo = rand()%100;
        i++;
    }
    Imprime(A,n);
    //Retorna o numero de itens
    return A;
}
#endif