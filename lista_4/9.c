#include<stdio.h>
#include<math.h>

int main(){

	float peso , altura;
	
	scanf("%f%f" , &peso , &altura);
	
	printf("\nIMC = %f\n" , peso / (pow(altura , 2)));
	
	return 0;
}
