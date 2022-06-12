#include<stdio.h>

int main(){

	int i , res;
	
	for(i = 1  , res = 0; i <= 15 ; i++)
		res += i;

	printf("\nres = %d\n" , res);

	return 0;
}
