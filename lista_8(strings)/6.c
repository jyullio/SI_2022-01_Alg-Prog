#include<stdio.h>
#include<string.h>

#define N 80

int main(){

    int i;
    char str[N];

    fgets(str , N , stdin);
    str[strcspn(str , "\n")] = '\0';

    printf("\n");
    for(i = strlen(str) - 1 ; i >= 0 ; i--){
	printf("%c" , str[i]);
    }
    printf("\n");
    
    return 0;
}
