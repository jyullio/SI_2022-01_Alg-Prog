#include<stdio.h>
#include<string.h>

#define N 80

int my_strlen(char *str);

int my_strlen(char *str){

    int i = 0;
    while(str[i] != '\0'){
	i++;
    }
    return i;
}

int main(){

    char str[N];

    fgets(str , N , stdin);
    str[strcspn(str , "\n")] = '\0';

    printf("\nlen str: %ld\n" , my_strlen(str));
    
    return 0;
}
