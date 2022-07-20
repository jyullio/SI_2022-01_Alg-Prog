#include<stdio.h>
#include<string.h>

#define LEN 80

int main(){

    int i;
    char str[LEN] , ch;
    int qtd_ch;

    fgets(str , LEN , stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("\ndigite um caractere:");
    scanf("\n%c" , &ch);

    i = 0;
    while(str[i] != '\0'){
        
        if(str[i] == ch){
            qtd_ch++;
        }

        i++;
    }

    printf("\nqtd_ch : %d\n" , qtd_ch);

    return 0;
}