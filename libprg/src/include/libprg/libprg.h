#ifndef LIBPRG_LIBPRG_H
#define LIBPRG_LIBPRG_H
#include <stdbool.h>

//PILHA
typedef struct pilha pilha_t;
pilha_t* criar_pilha(int capacidade);
int empilhar(pilha_t* pilha, int valor);
int topo(pilha_t* pilha);
int desempilhar(pilha_t* pilha);
int tamanho(pilha_t* pilha);
bool vazia(pilha_t* pilha);
int destruir_pilha(pilha_t* pilha);
int elementos(pilha_t* pilha);

//FILA
typedef struct fila fila_t;
fila_t* criar_fila(int capacidade);
int enfileirar(fila_t* fila, int valor);
int desenfileirar(fila_t* fila);
int inicio(fila_t* fila);
int fim(fila_t* fila);
bool vazia_f (fila_t* fila);
bool cheia (fila_t* fila);
int destruir_fila(fila_t* fila);
int tamanho_f(fila_t* fila);
int elementos_f(fila_t* fila, int n);
int posicao_inicio_f(fila_t* fila);

//LISTA LINEAR
typedef struct lista_linear lista_linear_t;
lista_linear_t* criar_lista_l( int capacidade, bool ord);

//LISTA ENCADEADA
typedef struct no no_t;
no_t* criar_lista_encadeada(int valor);
void inserir_encadeada(no_t** inicio, int valor);


#endif
