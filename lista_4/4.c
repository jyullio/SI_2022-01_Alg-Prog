#include<stdio.h>

int main(){

	int qtd_pao , qtd_leite , qtd_suco;
	float valor_pao , valor_leite , valor_suco;
	
	scanf("%d%f" , &qtd_pao , &valor_pao);
	scanf("%d%f" , &qtd_leite , &valor_leite);
	scanf("%d%f" , &qtd_suco , &valor_suco);
	
	printf("\nvalor  = %.2f\n" , (qtd_pao * valor_pao) + (qtd_leite * valor_leite) + (qtd_suco * valor_suco));

	return 0;
}	
