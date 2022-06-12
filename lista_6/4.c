#include<stdio.h>


	
#define LEN_NOME 80

int main(){

	int i , qtd;
	char nome[LEN_NOME];
	
	
	scanf("\n%[^\n]s" , nome);
	scanf("\n%d" , &qtd);
	
	for(i = 0 ; i < qtd ; i++)
		printf("\n%s\n" , nome);

	return 0;
}


