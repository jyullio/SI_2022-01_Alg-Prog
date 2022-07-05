#include<stdio.h>

#define N 8

int main(){

    int i;
    int vet[N];
    int num1 , num2;

    for(i = 0 ; i < N ; i++){
	scanf("\n%d" , &vet[i]);
    }

    printf("\ndigite dois numeros:");
    scanf("%d%d" , &num1 , &num2);

    printf("\npos(%d) = %d -- pos(%d) = %d\n" , num1 , vet[num1] , num2 , vet[num2]);

    return 0;
}
