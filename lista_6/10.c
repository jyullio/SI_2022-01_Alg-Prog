#include<stdio.h>

int main(){

	int i , num;
	
	scanf("%d" , &num);
	
	for(i = 0 ; i <= 10 ; i++){
	
		printf("\n%d x %d = %d\n" , num , i , (num * i));
	
	}

	return 0;
}
