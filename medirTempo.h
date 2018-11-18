/************************************************
LAED1 - Trabalho Pratico 2
Alunos:Christian Medeiros Cantarino
       João Victor Duarte Mazagão Rodrigues
Matriculas:201722040130
          201722040378
Descricao do programa:Funçoes para medicao de tempo
Data:18/11/2018
************************************************/

#include <stdio.h>
#include <sys/time.h>
#include <sys/resource.h>

// Variaveis relacionadas com a medicao do tempo:
typedef struct medeTempo{
    int who;//Informacao a ser retornada sobre o processo
    struct rusage usage;
    long utotalms, utotalsec; //tempo do usuario: tempo que a CPU gasta executando o programa
    long stotalms, stotalsec; //tempo do sistema: tempo que a CPU gasta executando chamadas de sistema para o programa
}medeTempo;
    
    void inicia(medeTempo tempo){
        tempo.who = RUSAGE_SELF;
    }

    //Pega tempo de execucao
    void printTempo(medeTempo tempo){
    getrusage(tempo.who, &(tempo.usage));
    
    //Tempo de usuário na CPU
    tempo.utotalsec = tempo.usage.ru_utime.tv_sec; //segundos
    tempo.utotalms = tempo.usage.ru_utime.tv_usec; //microsegundos
    
    //Tempo de sistema na CPU
    tempo.stotalsec = tempo.usage.ru_stime.tv_sec; //segundos
    tempo.stotalms = tempo.usage.ru_stime.tv_usec; //microsegundos
    
    //Imprime tempos no console
    printf ("***************************************************************\n\n");
    printf ("Tempo de usuario: %ld segundos e %ld microssegundos.\n\n", tempo.utotalsec, tempo.utotalms);
    printf ("Tempo de sistema: %ld segundos e %ld microssegundos.\n\n", tempo.stotalsec, tempo.stotalms);
    printf ("***************************************************************\n");
    }