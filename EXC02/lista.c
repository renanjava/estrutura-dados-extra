#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void criar_lista(Lista* lista){
	lista->inicio = NULL;
	lista->tamanho = 0;
}

void inserir_inicio(Lista *lista, int num){
	No *novo = (No*)malloc(sizeof(No));
	
	if(novo){
		novo->valor = num;
		novo->proximo = lista->inicio;
		lista->inicio = novo;
	}else
		printf("Erro ao alocar memoria.\n");
}

void inserir_fim(Lista *lista, int num){
	No *aux, *novo = (No*)malloc(sizeof(No));
	
	if(novo){
		novo->valor = num;
		novo->proximo = NULL;
		
		if(lista->inicio == NULL)
			lista->inicio = novo;
		else{
			aux = lista->inicio;
			while(aux->proximo)
				aux = aux->proximo;
			aux->proximo = novo;
		}
		lista->tamanho++;
	}else
		printf("Erro ao alocar memoria.\n");
}

void imprimir_valor(Lista lista){
	
	while(lista.inicio){
		printf("Vertice: %d ", lista.inicio->valor);
		if(lista.inicio->elemento_proximo){
			printf("Arestas: ");
			while(lista.inicio->elemento_proximo){
				printf("%d", lista.inicio->elemento_proximo->valor);
				lista.inicio->elemento_proximo = lista.inicio->elemento_proximo->elemento_proximo;
			}
		}
		lista.inicio = lista.inicio->proximo;
	}
	printf("\n\n");
}

No* remover(Lista *lista, int num){
	No *aux, *remove = NULL;
	
	if(lista->inicio){
		if(lista->inicio->valor == num){
			remove = lista->inicio;
			lista->inicio = remove->proximo;
		}else{
			aux = lista->inicio;
			while(aux->proximo && aux->proximo->valor != num)
				aux = aux->proximo;
			if(aux->proximo){
				remove = aux->proximo;
				aux->proximo = remove->proximo;
			}
		}
	}
	return remove;
}

No* buscar(Lista *lista, int num){
	No *aux, *no = NULL;
	
	aux = lista->inicio;
	while(aux && aux->valor != num)
		aux = aux->proximo;
	if(aux)
		no = aux;
	return no;
}
