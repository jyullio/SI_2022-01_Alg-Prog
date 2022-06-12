#include<stdio.h>

int main(){

	int i , idade , qtd_pessoas_maiores_de_idade;
	
	for(i = 0 , qtd_pessoas_maiores_de_idade = 0; i < 20 ; i++){
	
		scanf("\n%d" , &idade);
		
		if(idade >= 18)
			qtd_pessoas_maiores_de_idade++;
		
	}
	printf("\nqtd pessoas maiores de idade = %d\n" , qtd_pessoas_maiores_de_idade);

	return 0;
}
