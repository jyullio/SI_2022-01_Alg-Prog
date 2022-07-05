#include<stdio.h>
#include<string.h>

#define N 80

int my_strcmp(char *str1 , char *str2){

    int i;

    char letra_str1 , letra_str2;

    i = 0;
    while(str1[i] != '\0' && str2[i] != '\0'){

	letra_str1 = str1[i];
	letra_str2 = str2[i];
	
	
	if(letra_str1 < letra_str2){//letra de str1 vem primeiro na ordem alf.
	    
	    return -1;
	    
	}else if(letra_str2 < letra_str1){//letra de str2 vem primeiro na ordem alf. 
	    
	    return 1;
	}

	i++;
	
    }

    /*
     * Caso verificar caracteres de str1 com aqueles de str2,e todos forem iguais, será nescessário comparar
     * o tamanho das strings, uma vez que uma string menor vem primeiro na ordem alf.
     */
    
    int len_str1 = strlen(str1);
    int len_str2 = strlen(str2);

    if(len_str1 < len_str2){
	return -1;
    }else if(len_str2 < len_str1){
	return 1;
    }
    
    

    return 0;
}

int main(){

    char str1[N] , str2[N];

    
    fgets(str1 , N , stdin);
    str1[strcspn(str1 , "\n")] = '\0';
    
    fgets(str2 , N , stdin);
    str2[strcspn(str2 , "\n")] = '\0';

    printf("\ndefualt strcmp : %d\n" , strcmp(str1 , str2));
    printf("\nmy strcmp: %d\n" , my_strcmp(str1 , str2));
    
    return 0;
}
