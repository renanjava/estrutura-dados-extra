#include <stdio.h>
#include <stdlib.h>
#include "grafo.h"

Grafo criarGrafo(int eh_ponderado, int eh_digrafo, int qtdVertices, Grafo grafo){
	criar_lista(&(grafo.listaAdjacencias));

	grafo.qtdVertices = qtdVertices;
	grafo.eh_digrafo = eh_digrafo;
	grafo.eh_ponderado = eh_ponderado;
	return grafo;
}

int insereVertice(int elemento, Grafo* grafo){
	inserir_fim(&(grafo->listaAdjacencias), elemento);
	printf("oi");
	return 1;
}

int insereAresta(int eh_ponderado, int eh_digrafo, int src, int dest, Grafo grafo){
	//if(grafo.matrizAdjacencias[src][dest] == 1)
		//return 0;
	if((src < 0 || dest < 0) || (src > grafo.qtdVertices || dest > grafo.qtdVertices))
		return 0;
		
	//grafo.matrizAdjacencias[src][dest] = 1;
	if(eh_digrafo == 0)
		insereAresta(0,1,dest,src,grafo);
	return 1;
}

void imprimir(Grafo grafo){
	imprimir_valor(grafo.listaAdjacencias);
}
