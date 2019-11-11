#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

void criar_lista_inv(struct ptr **tracer) {
    
    struct ptr *aux;
    int valor;
    (*tracer) = (struct ptr*)NULL;
    printf("Digite um numero: ");
    scanf("%d", &valor);
    while(valor>=0) {
        aux = (struct ptr*)malloc(sizeof(struct ptr));
        aux->valor = valor;
        aux->prox = (*tracer);
        (*tracer) = aux;
        aux = (struct ptr*)NULL;
        printf("Digite um numero: ");
        scanf("%d", &valor);
    }
    printf("\n");

}
