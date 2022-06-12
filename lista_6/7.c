#include<stdio.h>

int main(){

	int i , idade , sum_idade;
	
	for(i = 0 , sum_idade = 0; i < 20 ; i++){
	
		scanf("\n%d" , &idade);
		sum_idade += idade;
	}
	printf("\nmedia = %.2f\n" , (float)sum_idade/20);

	return 0;
}
