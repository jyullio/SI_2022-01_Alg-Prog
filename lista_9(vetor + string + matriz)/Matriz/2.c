#include<stdio.h>

#define LINES 6
#define COLS 6

int main(){

    int mat[LINES][COLS];
    int i , j;
    int qtd_num_maior_dez = 0;

    for(i = 0 ; i < LINES ; i++){
        for(j = 0 ; j < COLS ; j++){

            scanf("\n%d" , &mat[i][j]);

        }
    }

    for(i = 0 ; i < LINES ; i++){
        for(j = 0 ; j < COLS ; j++){

            if(mat[i][j] > 10){
                qtd_num_maior_dez++;
            }

        }

    }

    printf("\nqtd_num_maior_dex : %d\n" , qtd_num_maior_dez);

    return 0;
}