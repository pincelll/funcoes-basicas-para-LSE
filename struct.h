#pragma once

//struct basico de lse, caso altere algo nesse arquivo é provavel que precise mudar o codigo de todos os outros arquivos.

struct ptr {
    int valor;
    struct ptr *prox;
};