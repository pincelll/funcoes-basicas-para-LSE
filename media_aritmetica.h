#pragma once
#include <stdio.h>
#include "struct.h"

//parametros: inicio da lista e o numero de elementos que serao usados pra fazer a media
//caso num_de_elementos seja zero, a função calcula a media de todos os elementos da lista

float media_aritmetica(struct ptr **tracer, int num_de_elementos)  {

    int soma = 0, i;
    if((*tracer) != (struct ptr*)NULL) {
        struct ptr *aux = (*tracer);
        if(num_de_elementos == 0) {
            while(aux != (struct ptr*)NULL) {
                num_de_elementos++;
                soma += aux->valor;
                aux = aux->prox;
            }
        }
        else if(num_de_elementos > 0) {
            for(i=0;i<num_de_elementos;i++) {
                while(aux != (struct ptr*)NULL) {
                    soma += aux->valor;
                    aux = aux->prox;
                }
            }
        }
        else
            printf("\nErro: Entre com um numero de elementos maior ou igual a zero.\n");
    }
    else
        return 0;

    return (soma / num_de_elementos);

}