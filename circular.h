 #include <stdio.h>
#include <stdlib.h>
#include "no.h"
 
typedef struct {
	 No *inicio;
	 No *fim;
	 int tamanho;
} ListaCircular;

ListaCircular* create();

int inserir(ListaCircular* lista, int e);

int remover(ListaCircular* lista, int valor);

int size(ListaCircular* lista);

int find (ListaCircular* lista, int x);

int isEmpty(ListaCircular* lista);

void clear(ListaCircular* lista);

void printLista(ListaCircular* lista);

