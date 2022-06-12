#include<stdio.h>

int main(){

	float base , altura;
	
	scanf("%f%f" , &base , &altura);
	
	printf("\narea = %.2f\n" , base * altura);
	
	printf("\nperimetro = %.2f\n" , (base * 2) + (altura * 2));
	
	return 0;
}
