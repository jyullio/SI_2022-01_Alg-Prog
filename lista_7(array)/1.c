#include<stdio.h>

#define N 10

int main(){

    int i;
    int vet[N];

    for(i = 0 ; i < N ; i++){
	scanf("\n%d" , &vet[i]);
    }

    for(i = 0 ; i < N ; i++){
	printf("\nnum:%d -- pos:%d\n" , vet[i] , i);
    }

    return 0;
}
