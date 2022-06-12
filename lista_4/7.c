#include<stdio.h>

#define ANO1 2018
#define ANO2 2030

int main(){

	int ano_nascimento;
	
	scanf("%d" , &ano_nascimento);
	
	if(ano_nascimento > ANO1){
		
		printf("essa pessoa nasceu depois de %d" , ANO1);
	
	}else{
	
		printf("\nidade da pessoa em %d : %d\n" , ANO1 , ANO1 - ano_nascimento);
	
	}
	
	if(ano_nascimento > ANO2){
	
		printf("essa pessoa nasceu depois de %d" , ANO2);
	
	}else{
	
		printf("\nidade da pessoa em %d : %d\n" , ANO2 , ANO2 - ano_nascimento);
	
	}
	
	
	

	return 0;
}
