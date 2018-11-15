//
// Created by jvmazagao on 14/11/18.
//

#ifndef TP_AEDS1_TYPECODE_H
#define TP_AEDS1_TYPECODE_H

#endif //TP_AEDS1_TYPECODE_H

typedef long TipoChave;
typedef struct TipoItem {
    TipoChave Chave;
    // outros componentes
} TipoItem;

typedef int TipoIndice;

typedef TipoItem TipoVetor[MAXTAM + 1];
// MAXTAM + 1 por causa da sentinela em Insercao
TipoVetor A;