#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

//parametros: inicio da lista e valor a ser excluído

void excluir_elemento(struct ptr **tracer, int valor) {

    if((*tracer) == (struct ptr *)NULL)
        printf("\nErro: Lista vazia\n");

    else {

        struct ptr *menor = (*tracer), *aux = menor;
        while(aux != (struct ptr*)NULL && aux->valor != valor) {
            menor = aux;
            aux = aux->prox;
        }
        if(aux == (*tracer)) {
            (*tracer) = (*tracer)->prox;
            free(aux);
            aux = (struct ptr*)NULL;
            menor = aux;
            printf("\nRemovido com sucesso\n");
        }
        else if(aux->valor == valor) {
            menor->prox = aux->prox;
            free(aux);
            aux = (struct ptr*)NULL;
            menor = aux;
            printf("\nRemovido com sucesso\n");
        }
        else if(aux == (struct ptr*)NULL) {
            printf("\nErro: Valor nao encontrado na lista\n");
        }

    }

}