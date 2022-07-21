#include<stdio.h>

#define LINES 3
#define COLS 3

int main(){

    int mat1[LINES][COLS] , mat2[LINES][COLS] , mat_res[LINES][COLS];
    int i , j;

    printf("\nmat1:\n");
    for(i = 0 ; i < LINES ; i++){
        for(j = 0 ; j < COLS ; j++){

            scanf("\n%d" , &mat1[i][j]);

        }
    }


    printf("\nmat2:\n");
    for(i = 0 ; i < LINES ; i++){
        for(j = 0 ; j < COLS ; j++){

            scanf("\n%d" , &mat2[i][j]);

        }
    }


    printf("\nmat1:\n");
    for(i = 0 ; i < LINES ; i++){
        for(j = 0 ; j < COLS ; j++){

            printf("%d " , mat1[i][j]);

        }

        printf("\n");
    }

    printf("\n");


    printf("\nmat2:\n");
    for(i = 0 ; i < LINES ; i++){
        for(j = 0 ; j < COLS ; j++){

            printf("%d " , mat2[i][j]);

        }

        printf("\n");
    }


    for(i = 0 ; i < LINES ; i++){
        for(j = 0 ; j < COLS ; j++){

            mat_res[i][j] = mat1[i][j] - mat2[i][j];

        }
    }

    printf("\nmat res:\n");
    for(i = 0 ; i < LINES ; i++){
        for(j = 0 ; j < COLS ; j++){

            printf("%d " , mat_res[i][j]);

        }

        printf("\n");
    }


    


    return 0;
}