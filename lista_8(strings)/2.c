#include<stdio.h>
#include<string.h>

#define N 80

int main(){

    char str[N];

    fgets(str , N , stdin);
    str[strcspn(str , "\n")] = '\0';

    printf("\nlen str: %ld\n" , strlen(str));
    
    return 0;
}
