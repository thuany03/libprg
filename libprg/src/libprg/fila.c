#include <stdlib.h>
#include <stdbool.h>

typedef struct fila {
    int* elementos;
    int inicio;
    int fim;
    int tamanho;
    int capacidade;

} fila_t;

fila_t* criar_fila(int capacidade) {
    fila_t* fila = malloc(sizeof(fila_t));
    fila->elementos = malloc(sizeof(int) * capacidade);
    fila->inicio = 0;
    fila->fim = 0;
    fila->tamanho = 0;
    fila->capacidade = capacidade;

    return fila;
}
int enfileirar(fila_t* fila, int valor) {

    if ( fila->tamanho >= fila->capacidade) exit (EXIT_FAILURE);

    fila->elementos[fila->fim] = valor;
    fila->fim = (fila->fim +1) % fila->capacidade;
    fila->tamanho++;

    return 0;
}

bool vazia_f (fila_t* fila) {
    return fila->tamanho == 0;
}

int desenfileirar(fila_t* fila)
{
    if (vazia_f(fila)) exit(EXIT_FAILURE);
    int valor = fila->elementos[fila->inicio];
    fila->inicio = (fila->inicio + 1) % fila->capacidade;
    fila->tamanho--;
    return valor;
}

int inicio(fila_t* fila){
    return fila->elementos[(fila->inicio)];
}

int fim(fila_t* fila){
   return fila->elementos[(fila->fim - 1 + fila->capacidade) % fila->capacidade];
}

bool cheia (fila_t* fila) {
    return fila->tamanho == fila->capacidade;
}

int destruir_fila(fila_t* fila) {
    free(fila->elementos);
    free(fila);
    return 0;
}

int tamanho_f(fila_t* fila)
{
    return fila->tamanho;
}

int elementos_f(fila_t* fila, int n) {
    return fila->elementos[n];
}

int posicao_inicio_f(fila_t* fila){
    return fila->inicio;
}