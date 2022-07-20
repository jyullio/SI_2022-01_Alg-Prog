#include<stdio.h>
#include<string.h>

#define LEN 80

int main(){

    int i;
    int qtd_espaco_branco = 0;
    char str[LEN];

    fgets(str , LEN , stdin);
    str[strcspn(str, "\n")] = '\0';

    i = 0;
    while(str[i] != '\0'){
        
        if(str[i] == ' '){
            qtd_espaco_branco++;
        }

        i++;
    }
    
    printf("\nqtd espaco em branco: %d\n" , qtd_espaco_branco);

    return 0;
}