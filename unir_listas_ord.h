#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
#include "inserir_ordenado.h"

//parametros: inicio das duas listas a serem unidas, e inicio da lista que sera criada a partir das duas outras
//a diferença de unir_listas_ord pra unir_listas_dir é que unir_listas_ord usa inserir_ordenado, ou seja,
//a lista a ser criada vai estar ordenada, enquanto unir_listas_dir usa inserir_fim, ou seja,
//a lista a ser criada vai estar na ordem dos valores das outras listas.

void unir_listas_ord(struct ptr *aux1, struct ptr *aux2, struct ptr **tracer) {
	
	while(aux1 != (struct ptr*)NULL) {
		inserir_ordenado(&(*tracer), aux1->valor);
		aux1 = aux1->prox;
	}
	while(aux2 != (struct ptr*)NULL) {
		inserir_ordenado(&(*tracer), aux2->valor);
		aux2 = aux2->prox;
	}
	
}