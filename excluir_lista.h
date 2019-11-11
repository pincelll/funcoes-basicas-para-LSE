#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

void excluir_lista(struct ptr **tracer) {

    if((*tracer) == (struct ptr*)NULL)
        printf("\nErro: Lista vazia\n");
    else {
        struct ptr *aux = (*tracer);
        while(aux != (struct ptr*)NULL) {
            (*tracer) = (*tracer)->prox;
            free(aux);
            aux = (*tracer);
        }
    }

}