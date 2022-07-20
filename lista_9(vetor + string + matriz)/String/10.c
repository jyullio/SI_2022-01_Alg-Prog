#include<stdio.h>
#include<string.h>

#define LEN 80

int main(){

    int i;
    char str[LEN];
    int qtd_vogal = 0;

    fgets(str , LEN , stdin);
    str[strcspn(str, "\n")] = '\0';

    i = 0;
    while(str[i] != '\0'){
        
        if(str[i] == 'a' || 
           str[i] == 'e' || 
           str[i] == 'i' ||
           str[i] == 'o' ||
           str[i] == 'u'
           )
           {
                qtd_vogal++;
           }

        i++;
    }

    printf("\nqtd_vogal : %d\n" , qtd_vogal);

    return 0;
}