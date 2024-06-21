#include <stdio.h>
#include <stdlib.h>
#include "grafo.h"

Grafo criarGrafo(int eh_ponderado, int eh_digrafo, int qtdVertices, Grafo grafo){
	int i, j;
	grafo.matrizAdjacencias = (int**)malloc(sizeof(int*) * qtdVertices);
		
	 for(i = 0; i < qtdVertices; i++){
	 	grafo.matrizAdjacencias[i] = (int*)malloc(sizeof(int) * qtdVertices);
	 	for(j = 0; j < qtdVertices; j++)
	 		grafo.matrizAdjacencias[i][j] = 0;
	 }
	 grafo.qtdVertices = qtdVertices;
	 grafo.eh_digrafo = eh_digrafo;
	 grafo.eh_ponderado = eh_ponderado;
	 return grafo;
}

int insereAresta(int eh_ponderado, int eh_digrafo, int src, int dest, Grafo grafo){
	if(grafo.matrizAdjacencias[src][dest] == 1)
		return 0;
	if((src < 0 || dest < 0) || (src > grafo.qtdVertices || dest > grafo.qtdVertices))
		return 0;
		
	grafo.matrizAdjacencias[src][dest] = 1;
	if(eh_digrafo == 0)
		insereAresta(0,1,dest,src,grafo);
	return 1;
}

void imprimir(Grafo grafo){
	int i, j;
	for(i = 0; i < grafo.qtdVertices; i++){
	 	for(j = 0; j < grafo.qtdVertices; j++)
	 		printf("%i ",grafo.matrizAdjacencias[i][j]);
		 printf("\n");
	 }	
}
