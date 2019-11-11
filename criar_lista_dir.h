#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

void criar_lista_dir(struct ptr **tracer) {

    struct ptr *aux;
    int valor;
    (*tracer) = (struct ptr*)NULL;
    printf("Digite um numero: ");
    scanf("%d", &valor);
    if(valor>=0) {
        (*tracer) = (struct ptr*)malloc(sizeof(struct ptr));
        (*tracer)->valor = valor;
        (*tracer)->prox = (struct ptr*)NULL;
        aux = (*tracer);
        printf("Digite um numero: ");
        scanf("%d", &valor);
        while(valor>=0) {
            aux->prox = (struct ptr*)malloc(sizeof(struct ptr));
            aux = aux->prox;
            aux->valor = valor;
            aux->prox = (struct ptr*)NULL;
            printf("Digite um numero: ");
            scanf("%d", &valor);
        }
    }
    aux = (struct ptr*)NULL;
    printf("\n");

}
