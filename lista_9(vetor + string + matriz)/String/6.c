#include<stdio.h>
#include<string.h>

#define LEN 80

int main(){

    int i;
    char str[LEN];

    fgets(str , LEN , stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("\n");
    i = strlen(str) - 1;
    while(i >= 0){
        printf("%c" , str[i]);
        i--;
    }
    printf("\n");

    return 0;
}