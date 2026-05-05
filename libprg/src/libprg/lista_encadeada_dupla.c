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

bool remover_encadeada_dupla(nod_t** inicio, int valor) {
    nod_t* atual = *inicio;

    while (atual != NULL) {
        if (atual->dado == valor) {
            if (atual->anterior == NULL) {
                *inicio = atual->proximo;
            } else {
                atual->anterior->proximo = atual->proximo;
                atual->proximo->anterior = atual->anterior;
            }
            free(atual);
            return true;
        }
        atual = atual->proximo;
    }
    return false;
}

nod_t* buscar_encadeada_dupla(nod_t** inicio, int valor) {
    nod_t *atual = *inicio;

    while (atual != NULL){
        if (atual->dado == valor) return atual;
        atual = atual->proximo;
    }
    return NULL;
}

void destruir_encadeada_dupla(nod_t** inicio) {
    nod_t* atual = *inicio;
    while(atual != NULL) {
        nod_t* proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }
}