#include<stdio.h>

#define N 10

int main(){

    int i;
    int vet[N];

    for(i = 0 ; i < N ; i++){
	scanf("\n%d" , &vet[i]);
    }

    for(i = N - 1 ; i >= 0 ; i--){
	printf("\nnum:%d\n" , vet[i]);
    }

    return 0;
}
