#include<stdio.h>
#include<math.h>

#define PI 3.14

int main(){

	float raio;

	scanf("%f" , &raio);
	
	printf("\narea = %.2f\n" , PI * pow(raio , 2));
	
	printf("\ncircunferencia = %.2f\n" , 2 * PI * raio);

	return 0;
}
