 struct no{
 	int dados;
 	struct no *anterior;
	struct no *proximo;
 } ;

typedef struct no No;
 
No* createNo(int v, No* anterior, No* proximo);
 
void printNo(No* no);
 
void freeNo(No *no);

