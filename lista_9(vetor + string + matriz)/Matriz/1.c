#include<stdio.h>

#define LINES 3
#define COLS 3

int main(){

    int mat[LINES][COLS];
    int i , j;

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
    


    return 0;
}