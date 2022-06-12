#include<stdio.h>

int main(){

	char conceito;

	scanf("%c" , &conceito);

	switch(conceito){

		case 'A':
		case 'a':
			printf("Excelente\n");
			break;
			 
		case 'B':
		case 'b':
			printf("Otimo\n");
			break;
			 
		case 'C':
		case 'c':
			printf("Bom\n");
			 break;
		case 'D':
		case 'd':
			printf("Regular\n");
			 break;
		case 'E':
		case 'e':
			printf("Ruim\n");
			break;
			 
		case 'F':
		case 'f':
			printf("Nos vemos novamente no próximo ano...\n");
			break;
			 
		 default:
			printf("ERRO");

	}

	return 0;
}
