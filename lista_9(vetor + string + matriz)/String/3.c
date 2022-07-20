#include<stdio.h>
#include<string.h>

#define LEN 80

int main(){

    char str[LEN];

    fgets(str , LEN , stdin);
    str[strcspn(str, "\n")] = '\0';

    if(str[0] == 'a' || str[0] == 'A'){
        printf("\nnome:%s\n" , str);
    }

    return 0;
}