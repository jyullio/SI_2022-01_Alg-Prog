#include<stdio.h>

#define VALOR_DIA (50.70)

int main(){

	int num_dias_trabalhados;
	
	scanf("%d" , &num_dias_trabalhados);

	printf("valor = %.2f" , num_dias_trabalhados * VALOR_DIA);

}
