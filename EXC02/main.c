#include <stdio.h>
#include <stdlib.h>
#include "grafo.h"

int main() {
	Grafo grafo;
	grafo = criarGrafo(0, 0, 10, grafo);
	insereVertice(10,&grafo);
	imprimir(grafo);
	//printf("\n\n");
	//insereAresta(0, grafo.eh_digrafo, 1, 2, grafo);
	//imprimir(grafo);
	return 0;
}
