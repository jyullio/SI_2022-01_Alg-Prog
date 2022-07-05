#include<stdio.h>

#define N 10

int main(){

    int i , j;
    int vet[N];

    for(i = 0 ; i < N ; i++){
	scanf("\n%d" , &vet[i]);
    }

    for(i = N - 1 , j = 0 ; j < i ; i-- , j++){
	printf("\nsoma(%d + %d)  = %d\n" , vet[i] , vet[j] , vet[i] + vet[j]);
    }

    return 0;
}
