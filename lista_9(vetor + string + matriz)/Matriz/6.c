#include<stdio.h>

#define LINES 3
#define COLS 3

int main(){

    int mat[LINES][COLS];
    int i , j;
    int soma_par = 0 , soma_impar = 0;

    for(i = 0 ; i < LINES ; i++){
        for(j = 0 ; j < COLS ; j++){

            scanf("\n%d" , &mat[i][j]);

        }
    }

    for(i = 0 ; i < LINES ; i++){
        for(j = 0 ; j < COLS ; j++){

            printf("%d " , mat[i][j]);

        }

        printf("\n");
    }

    for(i = 0 ; i < LINES ; i++){
        for(j = 0 ; j < COLS ; j++){

            if(mat[i][j] % 2 == 0){
                soma_par += mat[i][j];
            }else{
                soma_impar += mat[i][j];
            }

        }

    }
    
    printf("\nsoma_par: %d -- soma_impar: %d\n" , soma_par , soma_impar);


    return 0;
}