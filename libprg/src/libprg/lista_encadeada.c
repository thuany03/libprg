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
} //para chamar a função: inserir_encadeada(&lista