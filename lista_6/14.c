#include<stdio.h>

int main(){


	int i , num , qtd1 , qtd2 , qtd3;
	
	for(i = 0  , qtd1 = 0 , qtd2 = 0 , qtd3 = 0; i < 5 ; i++){
		
		scanf("\n%d" , &num);
		
		if(num > 0 && num < 100){
			qtd1++;
		}else if(num > 101 && num < 200){
			qtd2++;
		}else if(num > 200){
			qtd3++;
		}
		
	}
	printf("\n%d , %d , %d\n" , qtd1 , qtd2 , qtd3);

	return 0;
}
