#include <stdio.h>
#include <stdlib.h>

typedef struct no No; 

typedef struct lista {
    No* inicio;
    int tamanho;
} Lista;

struct no {
    No *elemento_proximo;
    int valor;
    No *proximo;
};

void criar_lista(Lista* lista);
void inserir_inicio(Lista *lista, int num);
void inserir_fim(Lista *lista, int num);
void imprimir_valor(Lista lista);
No* remover(Lista *lista, int num);
No* buscar(Lista *lista, int num);
