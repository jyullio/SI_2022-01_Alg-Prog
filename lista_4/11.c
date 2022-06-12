#include<stdio.h>

int main(){

	int idade1 , idade2 , idade3 , idade4;
	
	scanf("%d%d%d%d" , &idade1 , &idade2 , &idade3 , &idade4);

	printf("\nmedia = %.2f\n" , (idade1 + idade2 + idade3 + idade4) / 4.0);

	return 0;
}
