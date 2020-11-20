#include <stdio.h>
#include <stdlib.h>
#include "circular.h"

int main() {
	
	ListaCircular * li = create();
	
	inserir(li, 4);
	inserir(li, 5);
	inserir(li, 6);
	inserir(li, 7);
	inserir(li, 8);

	
	printLista(li);

	printf("\nRetorna 1 se foi possivel remover: %d \n",remover(li, 6));
	
	printLista(li);
	
	printf("\n");
	size(li);
	
	printf("\nBusca o elemento e retorna o indice se encontrado, -1 caso não exista o elemento : %d \n",find(li, 8));
	
	printf("Retorna 1 se a lista esta vazia, 0 caso oposto: %d \n",isEmpty(li));
	
	clear(li);
	
	printf("Tamanho apos esvaziar lista \n");
	size(li);

	
	return 0;
}
