	  #include <stdio.h>
	 #include <stdlib.h>
	 #include "no.h"
	 
	 No* createNo(int v, No* anterior, No* proximo){ //3
	 	//complexidade espacial -> O (4) = O(c). constante.
	 	No * n = (No*) malloc(sizeof(No)); //1//1
	 	
	 	n->dados = v; //1
	 	n->anterior = anterior; //1
	 	n->proximo = proximo; //1
	 	
	 	return n; //1
	 	
	 	//complexidade temporal -> O (5) = O(c). constante.
	 	
	 }
	 
	 void printNo(No* n){ //1
	 	
	 	//complexidade espacial -> O (1) = O(c). constante.
	 	
	 	if(n != NULL && n->anterior != NULL &&  n->proximo != NULL) 
	 		printf("No [valor: %i, anterior: %i, proximo: %i]\n", n->dados, n->anterior->dados, n->proximo->dados);
	 	else if(n != NULL && n->anterior != NULL)
	 		printf("No [valor: %i, anterior: %i, proximo: NULL]\n", n->dados, n->anterior->dados);
	 	else if(n != NULL && n->proximo != NULL)
	 		printf("No [valor: %i, anterior: NULL, proximo: %i]\n", n->dados, n->proximo->dados);
	 	else if(n != NULL)
	 		printf("No [valor: %i, anterior: NULL, proximo: NULL]\n", n->dados);
	 	else
	 		printf("NULL\n");
	 	
	 	//complexidade temporal -> O (9) = O(c). constante.
	 	
	 }
	 
	 void freeNo(No* n){
	 	free(n);
	 
	 //complexidade espacial e temporal -> O (1) = O(c). constante.
	 }

