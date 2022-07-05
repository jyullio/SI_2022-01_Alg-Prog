#include<stdio.h>
#include<math.h>

#define N 10

int main(){

    int i;
    float numeros[N] , numeros_ao_quadrado[N];

    for(i = 0 ; i < N ; i++){
	scanf("\n%f" , &numeros[i]);
    }

    for(i = 0 ; i < N ; i++){
	numeros_ao_quadrado[i] = pow(numeros[i] , 2);
    }

    //print vetores
    printf("\n");
    for(i = 0 ; i < N ; i++){
	printf(" %.2f " , numeros[i]);
    }
    printf("\n");

    printf("\n");
    for(i = 0 ; i < N ; i++){
	printf(" %.2f " , numeros_ao_quadrado[i]);
    }
    printf("\n");
    
	
    return 0;
}
