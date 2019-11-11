#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

//parametros: inicio da lista e valor a ser inserido

void inserir_fim(struct ptr **tracer, int valor) {

    if((*tracer) == (struct ptr*)NULL) {

        (*tracer) = (struct ptr*)malloc(sizeof(struct ptr));
        (*tracer)->valor = valor;
        (*tracer)->prox = (struct ptr*)NULL;

    }
    else {

        struct ptr *aux = (*tracer);
        while(aux->prox != (struct ptr*)NULL)
            aux = aux->prox;
        aux->prox = (struct ptr*)malloc(sizeof(struct ptr));
        aux->prox->valor = valor;
        aux->prox->prox = (struct ptr*)NULL;
        aux = aux->prox->prox;
        
    }

}