#include<stdio.h>

#define LINES 3
#define COLS 3

int main(){

    int mat[LINES][COLS];
    int linha , coluna;
    int soma_diagonal = 0 , sub_acima_diagonal = 0 , mult_abaixo_diagonal = 1;

    for(linha = 0 ; linha < LINES ; linha++){
        for(coluna = 0 ; coluna < COLS ; coluna++){

            scanf("\n%d" , &mat[linha][coluna]);

        }
    }

    for(linha = 0 ; linha < LINES ; linha++){
        for(coluna = 0 ; coluna < COLS ; coluna++){

            printf("%d " , mat[linha][coluna]);

        }

        printf("\n");
    }

    for(linha = 0 ; linha < LINES ; linha++){
        for(coluna = 0 ; coluna < COLS ; coluna++){

            if(linha == coluna){
                soma_diagonal += mat[linha][coluna];
            }

            if(coluna > linha){
                sub_acima_diagonal -= mat[linha][coluna];
            }
            
            if(coluna < linha){
                mult_abaixo_diagonal *= mat[linha][coluna];
            }
            

        }

    }

    printf("\nsoma_diagonal: %d -- sub_acima_diagonal : %d -- mult_abaixo_diagonal: %d\n" , soma_diagonal , sub_acima_diagonal , mult_abaixo_diagonal);

    


    return 0;
}