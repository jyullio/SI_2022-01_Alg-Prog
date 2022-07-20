#include<stdio.h>
#include<string.h>

#define LEN 80

int main(){

    int i;
    int qtd_num_um = 0;
    char str[LEN];

    fgets(str , LEN , stdin);
    str[strcspn(str, "\n")] = '\0';

    i = 0;
    while(str[i] != '\0'){

        if(str[i] == '1'){
            qtd_num_um++;
        }
            
        i++;
    }

    printf("\nqtd num 1 : %d\n" , qtd_num_um);

    return 0;
}