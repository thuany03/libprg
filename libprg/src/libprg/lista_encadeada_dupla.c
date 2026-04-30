#include <stdbool.h>
#include <stdlib.h>
#include "libprg/libprg.h"

typedef struct nod {
    nod_t *proximo;
    nod_t *anterior;
    int dado;
} nod_t;

nod_t* criar_lista_encadeada_dupla(int valor) {
    nod_t* nod = malloc(sizeof(nod_t));
    nod->dado = valor;
    nod->proximo = NULL;
    return nod;
}

void inserir_encadeada_dupla(nod_t** inicio, int valor) {
    nod_t* novo = criar_lista_encadeada_dupla(valor);
    novo->proximo = *inicio;
    (*inicio)->anterior = novo;
    *inicio = novo;
}