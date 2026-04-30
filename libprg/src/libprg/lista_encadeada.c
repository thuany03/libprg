#include <stdbool.h>
#include <stdlib.h>
#include "libprg/libprg.h"

typedef struct no {
    no_t *proximo;
    int dado;
} no_t;

no_t* criar_lista_encadeada(int valor){
    no_t* no = malloc(sizeof(no_t));
    no->dado = valor;
    no->proximo = NULL;
    return no;
}

void inserir_encadeada(no_t** inicio, int valor) {
    no_t* novo = criar_lista_encadeada(valor);
    novo->proximo = *inicio;
    *inicio = novo;
} //para chamar a função: inserir_encadeada(&lista, valor)

bool remover_encadeada(no_t** inicio, int valor){
    no_t* atual = *inicio;
    no_t* anterior = NULL;

    while (atual != NULL) {
        if (atual->dado == valor) {
            if (anterior == NULL) {
                *inicio = atual->proximo;
            } else {
                anterior->proximo = atual->proximo;
            }
            free(atual);
            return true;
        }
        anterior = atual;
        atual = atual->proximo;
    }
    buscar_encadeada(inicio, valor);
}

no_t* buscar_encadeada(no_t** inicio, int valor) {
    no_t* atual = *inicio;

    while(atual != NULL) {
        if ( atual->dado == valor) return atual;
        atual = atual->proximo;
    }

    return NULL;
}

void destruir_encadeada(no_t** inicio) {
    no_t* atual = *inicio;

    while(atual != NULL) {
        no_t* proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }
}