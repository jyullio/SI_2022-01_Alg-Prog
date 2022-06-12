#include<stdio.h>

int main(){
    
    
	int escolha;
	float num1 , num2 , res;

	printf("Escolha:");
	scanf("%d" , &escolha);

	printf("Dois Numeros :");
	scanf("%f%f" , &num1 , &num2);

	switch(escolha){

	 case 1:
		res = (num1 + num2) / 2;    
		break;
	 case 2:
		res = num1 - num2;
		break;
	 case 3:
		res = num1 * num2;
		break;
	 case 4:
		res = num1 / num2;
		break;
	 default:
		printf("\nERRO\n");
		return 1;

	}

	printf("\nres = %.2f\n" , res);

    return 0;

}
