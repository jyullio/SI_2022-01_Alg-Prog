#include<stdio.h>
#include<math.h>

#define LINES 4
#define COLS 4

int main(){

    int mat[LINES][COLS] , mat_ao_quadrado[LINES][COLS];
    int i , j;

    for(i = 0 ; i < LINES ; i++){
        for(j = 0 ; j < COLS ; j++){

            scanf("\n%d" , &mat[i][j]);

        }
    }

    for(i = 0 ; i < LINES ; i++){
        for(j = 0 ; j < COLS ; j++){
            
            mat_ao_quadrado[i][j] = pow(mat[i][j] , 2);

        }
    }


    for(i = 0 ; i < LINES ; i++){
        for(j = 0 ; j < COLS ; j++){

            printf("%d " , mat_ao_quadrado[i][j]);

        }

        printf("\n");
    }
    


    return 0;
}