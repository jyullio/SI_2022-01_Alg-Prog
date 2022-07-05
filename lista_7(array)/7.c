#include<stdio.h>

#define N 10

int main(){

    int i;
    float notas[N] , maior_nota;
    
    for(i = 0 ; i < N ; i++){
	scanf("\n%f" , &notas[i]);
    }

    maior_nota = notas[0];
    for(i = 1 ; i < N ; i++){

	if(notas[i] > maior_nota)
	    maior_nota = notas[i];
	
    }

    printf("\nmaior nota : %.2f\n" , maior_nota);

    return 0;
}
