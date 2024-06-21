#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

typedef struct Grafo{
	int eh_ponderado;
	int eh_digrafo;
	Lista listaAdjacencias;
	int qtdVertices;
	float peso;
}Grafo;

Grafo criarGrafo(int eh_ponderado, int eh_digrafo, int qtdVertices, Grafo grafo);
int insereVertice(int elemento, Grafo* grafo);
int insereAresta(int eh_ponderado, int eh_digrafo, int src, int dest, Grafo grafo);
void imprimir(Grafo grafo);
