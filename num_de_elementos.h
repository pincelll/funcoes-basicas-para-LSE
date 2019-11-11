#pragma once
#include <stdio.h>
#include "struct.h"

int num_de_elementos(struct ptr **tracer) {

    struct ptr *aux = (*tracer);
    int count = 0;
    while(aux != (struct ptr*)NULL) {
        count++;
        aux = aux->prox;
    }
    if(!count)
        printf("\nLista vazia.\n");
    else
        return count;

}