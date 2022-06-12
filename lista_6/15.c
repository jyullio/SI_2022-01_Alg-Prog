#include<stdio.h>

int main(){
	
	int num , sum;
	
	sum = 0;
	
	while(scanf("\n%d" , &num) == 1 && num > 0)
		sum += num;
	
	printf("\n%d\n" , sum);
	
	return 0;

}
