# funcoes-basicas-para-LSE

na maioria das funções, eu utilizei um ponteiro de ponteiro (struct ptr **tracer)
pra que quem for usar possa escolher qual lista quer usar a função

pra chamar uma funcao exemplo(struct ptr **tracer), é preciso passar o endereço do inicio de uma lista

exemplo(&inicio);

isso é utilizado quando a funcao altera o conteudo da lista
em funções mostrar_conteudo ou num_de_elementos, não é necessário
porque a lista em si não é alterada, apenas os valores que já estão nela

para usar essas funções em um arquivo.c, basta usar
#include "exemplo.h"
e poderá usar a função como se estivesse no arquivo,
nao precisa copiar e colar as funcoes no codigo

boa sorte no brit amigos
