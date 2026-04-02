#include <stdbool.h>
#include <stdlib.h>

typedef struct lista_linear {
    int* elementos;
    int tamanho;
    int capacidade;
    bool ordenada;
}lista_linear_t;

lista_linear_t* criar_lista_linear( int capacidade, bool ord) {
    lista_linear_t* lista_linear = malloc(sizeof(lista_linear_t));
    lista_linear->elementos = malloc(sizeof(int) * capacidade);
    lista_linear->tamanho = 0;
    lista_linear->capacidade = capacidade;
    lista_linear->ordenada = ord;

    return lista_linear;
}

int add_elemento_lista_l(lista_linear_t lista, int valor) {

}
