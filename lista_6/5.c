#include<stdio.h>

int main(){
	
	int i , num , sum;
	
	for(i = 0 , sum = 0 ; i < 10 ; i++){
		
		scanf("\n%d" , &num);
		sum += num;
	
	}
	printf("\n%d\n" , sum);
	
	return 0;
}
