//
// Created by aluno on 17/03/2026.
//

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct pilha {
    int* elementos;
    int topo;
    int capacidade;
} pilha_t;

pilha_t* criar_pilha(int capacidade) {

    pilha_t* pilha = malloc(sizeof(pilha_t));
    pilha->elementos = malloc(sizeof(int) * capacidade);
    pilha->topo = -1;
    pilha->capacidade = capacidade;

    return pilha;
}

int empilhar(pilha_t* pilha, int valor){

    if(pilha->topo+1 >= pilha->capacidade){
        pilha->capacidade *= 2;
        pilha->elementos = realloc(pilha->elementos, pilha->capacidade * sizeof(int));
    }

    pilha->topo++;
    pilha->elementos[pilha->topo] = valor;

    return 0;

}
int desempilhar(pilha_t* pilha){

    if (pilha->topo != -1){
        int valor = pilha->elementos[pilha->topo];
        pilha->topo--;

        return valor;
    }

    exit(EXIT_FAILURE);
}

int tamanho(pilha_t* pilha){
    return pilha->topo+1;
}

int elementos(pilha_t* pilha) {
    for (int i = 0; i <= pilha->topo; i++) {
        printf("%d\n", pilha->elementos[i]);
    }

    return 0;
}

int topo(pilha_t* pilha)
{
    return pilha->elementos[pilha->topo];
}

bool vazia(pilha_t* pilha){
    return pilha->topo == -1;
}

int destruir_pilha(pilha_t* pilha){
    free(pilha->elementos);
    free(pilha);
    return 0;
}