#include<stdio.h>

#define LEN_NOME 80

int main(){

	int i;
	char nome[LEN_NOME];
	
	scanf("\n%[^\n]s" , nome);
	
	for(i = 0 ; i < 10 ; i++)
		printf("\n%s\n" , nome);

	return 0;
}
