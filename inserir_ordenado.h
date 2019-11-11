#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

//parametros: inicio da lista e valor a ser inserido

void inserir_ordenado(struct ptr **tracer, int valor) {
	
	struct ptr *aux = (struct ptr*)malloc(sizeof(struct ptr));
	aux->valor = valor;
	
	while((*tracer) != (struct ptr*)NULL && (*tracer)->valor <= valor)
		tracer = &(*tracer)->prox;
		
	aux->prox = *tracer;
	*tracer = aux;
	aux = (struct ptr*)NULL;
	
}