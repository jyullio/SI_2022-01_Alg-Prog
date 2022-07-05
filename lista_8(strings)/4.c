#include<stdio.h>
#include<string.h>

#define N 80

int main(){

    char str1[N] , str2[N];

    
    fgets(str1 , N , stdin);
    str1[strcspn(str1 , "\n")] = '\0';
    
    fgets(str2 , N , stdin);
    str2[strcspn(str2 , "\n")] = '\0';
    
    printf("\nres cmp: %d\n" , strcmp(str1 , str2));
    
    return 0;
}
