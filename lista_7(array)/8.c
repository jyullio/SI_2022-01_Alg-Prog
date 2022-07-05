#include<stdio.h>

#define N 10

int main(){

    int i;
    float notas[N] , menor_nota;
    
    for(i = 0 ; i < N ; i++){
	scanf("\n%f" , &notas[i]);
    }

    menor_nota = notas[0];
    for(i = 1 ; i < N ; i++){

	if(notas[i] < menor_nota)
	    menor_nota = notas[i];
	
    }

    printf("\nmenor nota : %.2f\n" , menor_nota);

    return 0;
}
