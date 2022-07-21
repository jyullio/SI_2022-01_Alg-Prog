#include<stdio.h>

#define LINES 3
#define COLS 3

int main(){

    int mat[LINES][COLS];
    int i , j;
    int soma = 0 , soma_diagonal = 0;


    for(i = 0 ; i < LINES ; i++){
        for(j = 0 ; j < COLS ; j++){

            scanf("\n%d" , &mat[i][j]);

        }
    }

    for(i = 0 ; i < LINES ; i++){
        for(j = 0 ; j < COLS ; j++){

            soma += mat[i][j];

            if(i == j){
                soma_diagonal += mat[i][j];
            }
        }

    }

    for(i = 0 ; i < LINES ; i++){
        for(j = 0 ; j < COLS ; j++){

            printf("%d " , mat[i][j]);

        }

        printf("\n");
    }

    printf("\nmatriz: %d -- diagonal: %d\n" , soma , soma_diagonal);

    

    return 0;
}