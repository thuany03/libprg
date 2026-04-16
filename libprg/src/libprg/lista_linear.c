#include <stdbool.h>
#include <stdlib.h>
#define CAPACIDADE_INICIAL 10

typedef struct lista_linear {
    int *elementos;
    int tamanho;
    int capacidade;
    bool ordenada;
} lista_linear_t;

lista_linear_t *criar_lista_l(bool ordenada) {
    lista_linear_t *lista_linear = malloc(sizeof(lista_linear_t));
    lista_linear->elementos = malloc(sizeof(int) * CAPACIDADE_INICIAL);
    lista_linear->tamanho = 0;
    lista_linear->capacidade = CAPACIDADE_INICIAL;
    lista_linear->ordenada = ordenada;

    return lista_linear;
}

int inserir_lista_l(lista_linear_t lista, int valor) {
}

// remover(lista_linear_t* lista, int alvo){
// int indice = buscar(lista, alvo)
// }

// buscar
// if (lista->ordenada) {
//     indice = buscar_binario
// }else {
//     indice = buscar_linear
// }}

// buscar_linear

// buscar_binario

// alterar

// ordernar

// combinar

// destruir
