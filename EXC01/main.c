#include <stdio.h>
#include <stdlib.h>
#include "grafo.h"

int main() {
	Grafo grafo;
	int src, dest;
	grafo = criarGrafo(0, 0, 10, grafo);
	
	printf("\nInforme o numero da rua de origem: ");
	scanf("%i",&src);
	printf("\nInforme o numero da rua de destino: ");
	scanf("%i",&dest);
	printf("\n\n");
	
	if (insereAresta(0, grafo.eh_digrafo, src, dest, grafo)) 
    	printf("Rua inserida com sucesso!\n");
    else 
        printf("Falha ao inserir a rua!\n");
    
	imprimir(grafo);
	return 0;
}
