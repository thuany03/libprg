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

bool vazia (fila_t* fila);
bool cheia (fila_t* fila);
int destruir_fila(fila_t* fila);


#endif
