#include<stdio.h>
#include<math.h>

int main(){

	float num;

	scanf("%f" , &num);

	printf("\n%.2f\n" , pow(num , 2));
	
	printf("\n%.2f\n" , pow(num , 3));
	
	printf("\n%.2f\n" , sqrt(num));
	
	
	return 0;
}
