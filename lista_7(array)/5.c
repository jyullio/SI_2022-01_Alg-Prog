#include<stdio.h>

#define N 5

int main(){

    int i;
    float alturas[N] , sum_alturas;

    for(i = 0 ; i < N ; i++){
	scanf("\n%f" , &alturas[i]);
    }

    for(i = 0 ; i < N ; i++){
	sum_alturas += alturas[i];
    }

    printf("\nmedia: %.2f\n" , sum_alturas/N);

    return 0;
}
