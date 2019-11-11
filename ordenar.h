#pragma once
#include <stdio.h>
#include "struct.h"

void ordenar(struct ptr **tracer) {

    int valor;
    struct ptr *aux = (*tracer), *aux2 = aux;
    if((*tracer) == (struct ptr*)NULL)
        printf("\nErro: Lista vazia\n\n");
    else {
        while(aux != (struct ptr*)NULL) {
            aux2 = aux->prox;
            while(aux2 != (struct ptr*)NULL) {
                if(aux->valor > aux2->valor) {
                    valor = aux->valor;
                    aux->valor = aux2->valor;
                    aux2->valor = valor;
                }
                aux2 = aux2->prox;
            }
            aux = aux->prox;
        }
    }

}