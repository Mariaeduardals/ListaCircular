	 #include <stdio.h>
	#include <stdlib.h>
	#include "circular.h"
	
	ListaCircular *create() {
		
		//complexidade espacial -> O (1) = O(c). constante.
		
		 ListaCircular *lista = (ListaCircular *)malloc(sizeof (ListaCircular)); //1 //1
	
		 if(lista != NULL) { //1
			 lista->inicio = NULL; //1
			 lista->fim = NULL; //1
			 lista->tamanho = 0; //1
		 }
	
		 return lista; //1
		//complexidade temporal -> O (5) = O(c). constante.
	}
	
	int inserir(ListaCircular *lista, int e ){ //2
		 
		 //complexidade espacial -> O (3) = O(c). constante.
		 
		No* novo = (No*) malloc(sizeof(No)); //1 //1
	
		if(novo != NULL) { //1
				 novo->dados = e; //1
	
				 if(lista->inicio == NULL) { //1
					novo->proximo = novo; //1
					novo->anterior = novo; //1
				 	lista->inicio = lista->fim = novo; //1
				 
				 } else {
					novo->proximo = lista->inicio; //1
					novo->anterior = lista->fim; //1
					lista->fim->proximo = novo; //1
					lista->inicio->anterior = novo; //1		
				 }
				 
				 lista->fim = novo; //1
				 lista->tamanho++; //1
				 return 1; //1
		 }
		 
		 return 0; //1
		 
		 //complexidade temporal -> O (15) = O(c). constante.
	}
	
	int remover(ListaCircular* lista, int valor){ //2
		
		//complexidade espacial -> O (3) = O(c). constante.
		
		if(lista != NULL){ //1
			No *alvo = lista->inicio; //1 //1
			
			while(alvo != NULL && alvo->dados != valor){ //n
				alvo = alvo->proximo; //1
			}
			
			if(alvo != NULL){ //1
				if(alvo != lista->inicio){ //1
					alvo->anterior->proximo = alvo->proximo; //1
				}else{
					lista->inicio = alvo->proximo; //1
				}
				
				if(alvo != lista->fim){ //1
					alvo->proximo->anterior = alvo->anterior; //1
				}else{
					lista->fim = alvo->anterior; //1
				}
				lista->tamanho--; //1
				return 1; //1
			}
		}
		return 0; //1
		
		//complexidade temporal -> O (13 + n) = O(n). linear.
		
	}
	
	int size(ListaCircular* lista){ //1
		
		//complexidade temporal -> O (1) = O(c). constante.
		
		printf("Tamanho: %d", lista->tamanho); //1
		
		//complexidade temporal -> O (1) = O(c). constante.
		
	}
	
	int find (ListaCircular* lista, int x){ //2
		
		//complexidade espacial -> O (4) = O(c). constante.
		
	  int aux = 0;	//1
	  No* alvo; //1
	  alvo = lista->inicio; //1
	  
	  while (alvo->proximo != lista->inicio) { //n
		
	     if (alvo->dados == x) //1
				return(aux);      //1 
	                            
	    	 else alvo = alvo->proximo; //1
	  		aux++; //1
	  }
	  if(lista->fim->dados == x ){ //1
	  	return aux; //1
	}
	  return -1; //1
	}
	
	int isEmpty(ListaCircular* lista){ //1
		if(lista->tamanho == 0){ //1
			return 1; //1
		}
		return 0; //1
	
		//complexidade temporal -> O (12 + n) = O(n). linear.
	
	}
	
	void clear(ListaCircular* lista){ //1
	
	//complexidade espacial -> O (1) = O(c). constante.
	
			if(lista != NULL){ //1
			lista->tamanho = 0; //1
			freeNo(lista); //1
			return 1; //1
		}
			return 0; //1
			
			//complexidade temporal -> O (5) = O(c). constante.
			
	}
	
	void printLista(ListaCircular* lista){ //1
			 
			 //complexidade espacial -> O (2) = O(c). constante.
			 
			 printf("\n----------Elementos da Lista -------------\n\n"); //1
			 
			 if(lista == NULL) //1
			 	printf("Lista vazia.\n"); //1
			 else{
			 	No *alvo = lista->inicio; //1 //1
			
			 
				 while(alvo->proximo != lista->inicio ){ //n
			
				 	printNo(alvo); //1
					alvo = alvo->proximo; //1
				 
				 }
				 printNo(alvo);	//1
			 }
			
			//complexidade temporal -> O (7 + n) = O(n). linear.
	}
	

