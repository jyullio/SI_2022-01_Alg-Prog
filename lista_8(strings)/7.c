#include<stdio.h>
#include<string.h>

#define N 80

int main(){

    int i;
    int ch;
    char str[N];

    fgets(str , N , stdin);
    str[strcspn(str , "\n")] = '\0';

    
    i = 0;
    while(str[i] != '\0'){
	
	ch = str[i];
	if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
	    printf("%c" , ch);

	i++;
    }
    printf("\n");
    
    
    return 0;
}
