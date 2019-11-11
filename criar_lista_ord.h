#pragma once
#include <stdio.h>
#include "inserir_ordenado.h"

void criar_lista_ord(struct ptr **tracer) {

    int valor;
    if((*tracer) != (struct ptr*)NULL)
        printf("\nErro: Lista já existente.\n");
    printf("\nDigite um valor: ");
    scanf("%d", &valor);
    while(valor >= 0) {
        inserir_ordenado(&(*tracer), valor);
        printf("\nDigite um valor: ");
        scanf("%d", &valor);
    }

}