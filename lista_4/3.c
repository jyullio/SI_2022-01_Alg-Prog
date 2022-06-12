#include<stdio.h>

int main(){

	float valor_pao;
	int qtd_pao;

	scanf("%d%f" , &qtd_pao , &valor_pao);
	
	printf("\nvalor = %.2f\n" , qtd_pao * valor_pao);

	return 0;
}
