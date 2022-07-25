#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//estados do software
#define ESTADO_MENU_PRINCIPAL 0
#define ESTADO_MENU_USUARIO 1
#define ESTADO_MENU_ADM 2


#define MAX_QTD_PRODUTOS_NO_VETOR 10 //qtd. máx. de elementos que um vetor pode suportar
#define MAX_COMPRIMENTO_NOME_PRODUTO 80 //qtd. máx. de caracteres para o nome do produto

#define MARCAR_ESPACO_VAZIO_NO_VETOR -1

void draw_menus();
void draw_produtos_carrinho();
void draw_produtos_registro();
int processar_input(char comando);
void adicionar_produto_registro();
void remover_produto_registro();
void adicionar_produto_carrinho();
void remover_produto_carrinho();
int encontrar_elemento_no_vetor_pelo_codigo(int codigos[] , int encontrar_codigo);
int encontrar_espaco_vazio_no_vetor(int codigos[]);
void inicializar_registro_e_carrinho_como_vazios();

//registro
int codigos_produtos_registrados[MAX_QTD_PRODUTOS_NO_VETOR];
char nomes_produtos_registrados[MAX_QTD_PRODUTOS_NO_VETOR][MAX_COMPRIMENTO_NOME_PRODUTO];
float valores_produtos_registrados[MAX_QTD_PRODUTOS_NO_VETOR];


//carrinho
int codigos_produtos_carrinho[MAX_QTD_PRODUTOS_NO_VETOR];
char nomes_produtos_carrinho[MAX_QTD_PRODUTOS_NO_VETOR][MAX_COMPRIMENTO_NOME_PRODUTO];
float valores_produtos_carrinho[MAX_QTD_PRODUTOS_NO_VETOR];
int qtd_produtos_carrinho[MAX_QTD_PRODUTOS_NO_VETOR];
float valor_total_carrinho = 0;

//estado
int estado_atual_software = ESTADO_MENU_PRINCIPAL;

//draw
bool redraw_menus = true;

int main(){

    inicializar_registro_e_carrinho_como_vazios();
    
    //main loop
    char comando;
    bool is_running = true;
    while(is_running){

		if(redraw_menus == true){
			draw_menus();
			redraw_menus = false;
		}

		//user input
		printf(">");
		scanf("\n%c" , &comando);
		
		//process user input
		if(processar_input(comando) < 0)
			is_running = false;
		
    }

    return 0;
}


//**** DRAW **********************************************************************************************************************
void draw_menus(){

    system("clear");//limpar janela

    switch(estado_atual_software){

		case ESTADO_MENU_PRINCIPAL:
		
			printf("1 - user\n");
			printf("2 - adm\n");
			printf("\ns-sair l-limpar_janela\n\n");
			break;

		case ESTADO_MENU_USUARIO:
		
			printf("****PRODUTOS REGISTRADOS****\n");
			draw_produtos_registro();
			printf("****************************\n");

			printf("\n");
			printf("****PRODUTOS CARRINHO*******\n");
			draw_produtos_carrinho();
			printf("****************************\n");
			
			printf("a - adicionar produto carrinho\n");
			printf("r - remover produto carrinho\n");
			
			printf("\ns-sair v-voltar l-limpar_janela\n\n");
			break;

		case ESTADO_MENU_ADM:
		
			printf("****PRODUTOS REGISTRADOS****\n");
			draw_produtos_registro();
			printf("****************************\n");
			
			printf("a - adicionar produto registro\n");
			printf("r - remover produto registro\n");
			printf("\ns-sair v-voltar l-limpar_janela\n\n");
			break;
			
    }
	
	
}


void draw_produtos_carrinho(){

    for(int i = 0 ; i < MAX_QTD_PRODUTOS_NO_VETOR ; i++){
	
		if(codigos_produtos_carrinho[i] != MARCAR_ESPACO_VAZIO_NO_VETOR){
			printf("%d\t%s\t%d\t%.2f\n" , codigos_produtos_carrinho[i] , nomes_produtos_carrinho[i] , qtd_produtos_carrinho[i] , valores_produtos_carrinho[i]);


		}
		
    }

	printf("\nvalor total: %.2f\n" , valor_total_carrinho);

    
}

void draw_produtos_registro(){
    
    for(int i = 0 ; i < MAX_QTD_PRODUTOS_NO_VETOR ; i++){
	
		if(codigos_produtos_registrados[i] != MARCAR_ESPACO_VAZIO_NO_VETOR){
			printf("%d\t%s\t%.2f\n" , codigos_produtos_registrados[i] , nomes_produtos_registrados[i] , valores_produtos_registrados[i]);
		}
	
    }
}

//**** PROCESSAR INPUT **********************************************************************************************************************
int processar_input(char comando){


    if(comando == 's'){//quit
		return -1;
	}

    if(comando == 'l'){//apenas limpar janela
		redraw_menus = true;
		return 0;
    }
    
    switch(estado_atual_software){
	
		case ESTADO_MENU_PRINCIPAL:
		
			switch(comando){
				
			case '1'://entrar como usuário
				
				estado_atual_software = ESTADO_MENU_USUARIO;
				redraw_menus = true;
				break;
				
			case '2'://entrar como administrador
				
				estado_atual_software = ESTADO_MENU_ADM;
				redraw_menus = true;
				break;

				
			default:
				
				printf("?\n");//erro caso comando estiver errado
				break;
			}
			
			break;
			
			case ESTADO_MENU_USUARIO:

			switch(comando){
				
				case 'a'://adicionar produto no carrinho
					
					adicionar_produto_carrinho();
					
					break;

			case 'r'://remover produto do carinho
				
					remover_produto_carrinho();

				break;

			case 'v'://comando para voltar no menu anterior
				
				estado_atual_software = ESTADO_MENU_PRINCIPAL;
				redraw_menus = true;
				break;
				
			default:
				
				printf("?\n");//erro caso comando estiver errado
				break;
			}
			
			break;

		case ESTADO_MENU_ADM:
		
			switch(comando){
				
			case 'a'://adicionar novo produto nos registros
				
				adicionar_produto_registro();

				break;

			case 'r'://remover produto registro
				
				remover_produto_registro();
				
				break;
				
			case 'v'://comando para voltar no menu anterior
				
				estado_atual_software = ESTADO_MENU_PRINCIPAL;
				redraw_menus = true;
				break;
				
			default:
				
				printf("?\n");//erro caso comando estiver errado
				break;
				
			}
			
			break;

	
	
    }


    return 0;
	
}


//**** REGISTRO **********************************************************************************************************************
void adicionar_produto_registro(){

    int codigo_produto_digitado;
    char nome_produto_digitado[MAX_COMPRIMENTO_NOME_PRODUTO];
    float valor_produto_digitado;
    

	printf("Digite o codigo do produto para ser adicionado no registro:");
    scanf("\n%d" , &codigo_produto_digitado);
	printf("Digite o nome do produto para ser adicionado no registro:");
    scanf("\n%s" , nome_produto_digitado);
    printf("Digite o valor do produtor para ser adicionado no registro:");
    scanf("\n%f" , &valor_produto_digitado);


    int index_espaco_vazio_registro = encontrar_espaco_vazio_no_vetor(codigos_produtos_registrados);
    if(index_espaco_vazio_registro < 0){
	printf("registro está cheio\n");
		return;
    }

    
    if(encontrar_elemento_no_vetor_pelo_codigo(codigos_produtos_registrados , codigo_produto_digitado) >= 0){
		printf("produto ja presente no registro\n");
		return;
    }


    codigos_produtos_registrados[index_espaco_vazio_registro] = codigo_produto_digitado;
    strcpy(nomes_produtos_registrados[index_espaco_vazio_registro] , nome_produto_digitado);
    valores_produtos_registrados[index_espaco_vazio_registro] = valor_produto_digitado;
    
    redraw_menus = true;//produto foi adicionado com sucesso, logo preciso printar novamente na janela
}

void remover_produto_registro(){

    int codigo_produto_digitado;

    printf("Digite o codigo do produto para ser removido do registro:");
    scanf("\n%d" , &codigo_produto_digitado);


    int indice_produto_registro = encontrar_elemento_no_vetor_pelo_codigo(codigos_produtos_registrados , codigo_produto_digitado);

    if(indice_produto_registro <  0){
		printf("produto nao presente no registro\n");
		return;
    }

    codigos_produtos_registrados[indice_produto_registro] = MARCAR_ESPACO_VAZIO_NO_VETOR;//"deletando elemento do registro"


    redraw_menus = true;//produto foi removido com sucesso, logo preciso printar novamente na janela
    
    
}


//**** CARRINHO **********************************************************************************************************************
void adicionar_produto_carrinho(){

    int codigo_digitado;
    int qtd_produtos_digitados;

	printf("Digite o codigo do produto para ser adicionado no carrinho:");
    scanf("\n%d" , &codigo_digitado);
	printf("Digite a quantidade de produtos para adicionar no carrinho:");
    scanf("\n%d" , &qtd_produtos_digitados);

	//verificar se tenho espaço disponível no vetor
    int indice_espaco_vazio_carrinho = encontrar_espaco_vazio_no_vetor(codigos_produtos_carrinho);
    if(indice_espaco_vazio_carrinho < 0){
		printf("carrinho está cheio\n");
		return;
    }
    
	//verificar se o produto já está contido no carrinho
    if(encontrar_elemento_no_vetor_pelo_codigo(codigos_produtos_carrinho , codigo_digitado) >= 0){
		printf("produto ja presente no carinho\n");
		return;
    }
    
	//verificar se o produto está registrado no sistema
	int indice_produto_registro = encontrar_elemento_no_vetor_pelo_codigo(codigos_produtos_registrados , codigo_digitado);
    if(indice_produto_registro < 0){
		printf("produto nao registrado no sistema\n");
		return;
    }

    //adicionando produto no vetor
    codigos_produtos_carrinho[indice_espaco_vazio_carrinho] = codigos_produtos_registrados[indice_produto_registro];
    strcpy(nomes_produtos_carrinho[indice_espaco_vazio_carrinho] , nomes_produtos_registrados[indice_produto_registro]);
    valores_produtos_carrinho[indice_espaco_vazio_carrinho] = valores_produtos_registrados[indice_produto_registro];
    qtd_produtos_carrinho[indice_espaco_vazio_carrinho] = qtd_produtos_digitados;
	valor_total_carrinho += (valores_produtos_carrinho[indice_espaco_vazio_carrinho] * qtd_produtos_carrinho[indice_espaco_vazio_carrinho]);
        
	
	redraw_menus = true;//produto foi adicionado com sucesso, logo preciso printar novamente na janela
    
}

void remover_produto_carrinho(){

	int codigo_produto_digitado;

	printf("Digite o codigo do produto para ser removido do carrinho:");
    scanf("\n%d" , &codigo_produto_digitado);

	//verificar se o produto está presente no carrinho
	int indice_produto_carrinho = encontrar_elemento_no_vetor_pelo_codigo(codigos_produtos_carrinho , codigo_produto_digitado);
    if(indice_produto_carrinho <  0){
		printf("produto nao presente no carrinho\n");
		return;
    }

	codigos_produtos_carrinho[indice_produto_carrinho] = MARCAR_ESPACO_VAZIO_NO_VETOR;

	valor_total_carrinho -= (valores_produtos_carrinho[indice_produto_carrinho] * qtd_produtos_carrinho[indice_produto_carrinho]);

	redraw_menus = true;//produto foi removido com sucesso, logo preciso printar novamente na janela

}

//**** UTILIDADES **********************************************************************************************************************
int encontrar_elemento_no_vetor_pelo_codigo(int codigos[] , int encontrar_codigo){

    for(int i = 0 ; i < MAX_QTD_PRODUTOS_NO_VETOR ; i++){
		if(codigos[i] == encontrar_codigo){
			return i;
		}
    }

    return -1;//retorna -1 caso não conseguir encontrar o elemento detro do vetor
    
}

int encontrar_espaco_vazio_no_vetor(int codigos[]){

    for(int i = 0 ; i < MAX_QTD_PRODUTOS_NO_VETOR ; i++){
	
		if(codigos[i] == MARCAR_ESPACO_VAZIO_NO_VETOR){
			return i;
		}
    }

    return -1;//vetor está cheio
    
}

void inicializar_registro_e_carrinho_como_vazios(){

    for(int i = 0 ; i < MAX_QTD_PRODUTOS_NO_VETOR ; i++){
		codigos_produtos_registrados[i] = MARCAR_ESPACO_VAZIO_NO_VETOR;
		codigos_produtos_carrinho[i] = MARCAR_ESPACO_VAZIO_NO_VETOR;
    }
    
}