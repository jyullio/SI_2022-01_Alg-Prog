#include<stdio.h>
#include<string.h>

#define LEN 80

int main(){

    char str[LEN];

    fgets(str , LEN , stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("\n%s\n" , str);

    return 0;
}