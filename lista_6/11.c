#include<stdio.h>

int main(){

	int i , num , qtd;
	for(i = 0  , qtd = 0; i < 20 ; i++){
		
		scanf("\n%d" , &num);
		if(num > 8)
			qtd++;
		
	}
	
	printf("\n%d\n" , qtd);

	return 0;
}
