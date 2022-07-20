#include<stdio.h>
#include<string.h>

#define LEN 80

int main(){

    int i;
    char str[LEN];

    fgets(str , LEN , stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("\n");
    i = 0;
    while(str[i] != '\0' && i < 4){
        printf("%c" , str[i]);
        i++;
    }
    printf("\n");

    return 0;
}