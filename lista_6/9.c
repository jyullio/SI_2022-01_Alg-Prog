#include<stdio.h>
#include<string.h>

#define LEN_NOME 80

int main(){

	int i;
	
	char nome[LEN_NOME] , nome_pessoa_mais_nova[LEN_NOME];
	int idade , menor_idade_digitada;

	for(i = 0 ; i < 10 ; i++){
		scanf("\n%[^\n]s" , nome);
		scanf("\n%d" , &idade);
		
		if(i == 0){//primeira idade digitada dentro do loop
			
			menor_idade_digitada = idade;
			strcpy(nome_pessoa_mais_nova , nome);
			
		}else{
		
			if(idade < menor_idade_digitada){
				menor_idade_digitada = idade;
				strcpy(nome_pessoa_mais_nova , nome);
			
			}
		
		}
		
	
	}
	printf("\nnome pessoa mais nova : %s\n" , nome_pessoa_mais_nova);
	

	return 0;
}	
