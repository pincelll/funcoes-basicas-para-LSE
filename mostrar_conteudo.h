#pragma once
#include <stdio.h>
#include "struct.h"

void mostrar_conteudo(struct ptr *aux) {

    if(aux == (struct ptr*)NULL)
        printf("Lista vazia!");
    while(aux != (struct ptr*)NULL) {
        printf("%d  ", aux->valor);
    	aux = aux->prox;
    }
    printf("\n\n");

}
