#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
#include "inserir_fim.h"

//parametros: inicio das duas listas a serem unidas, e inicio da lista que sera criada a partir das duas outras
//diferença entre unir_listas_dir e unir_listas_ord na outra funcao.

void unir_listas_dir(struct ptr *aux1, struct ptr *aux2, struct ptr **tracer) {
	
	while(aux1 != (struct ptr*)NULL) {
		inserir_fim(&(*tracer), aux1->valor);
		aux1 = aux1->prox;
	}
	while(aux2 != (struct ptr*)NULL) {
		inserir_fim(&(*tracer), aux2->valor);
		aux2 = aux2->prox;
	}
	
}