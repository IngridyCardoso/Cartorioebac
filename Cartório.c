#include <stdio.h> //biblioteca de comunicacao com o usuario
#include <stdlib.h> //biblioteca de alocacao de espaco em memoria
#include <locale.h> //biblioteca de alocacao de texto por regiao 
#include <string.h> //biblioteca responsável por cuidar das strings


int registro() //Função responsável por cadastrar os usuários no sistema
{
	
//inicio da criação de variáveis/string 	
char arquivo[40];
char cpf[40];
char nome[40];
char sobrenome[40];
char cargo[40];
//final da criação de variáveis 

printf("Digite o CPF a ser cadastrado:\n"); //coletando informações do usuário
scanf("%s", cpf); //%s refere-se a string

strcpy(arquivo, cpf); //responsável por copiar os valores das string

FILE *file; //cria o arquivo
file = fopen(arquivo, "w"); //cria o arquivo e o "w" significa escrever write
fprintf(file,cpf); // salva o valor da variavel
fclose(file); // fecha o arquivo

file = fopen(arquivo, "a"); // abri o arquivo salvo e o "a" atualiza para adicionar informações  
fprintf(file,","); //salva a variável "," para separar as irnformações salvas 
fclose(file); // fecha o arquivo

printf("Digite o nome a ser cadastrado:"); //coletando informações do Usuário
scanf("%s", nome); //%s refere-se a string

file = fopen(arquivo, "a"); //abri o arquivo salvo e o "a" atualiza para adicionar informações 
fprintf(file,nome); // salva o valor da variável 
fclose(file); // fecha o arquivo

file = fopen(arquivo, "a"); // abri o aruivo salvo e o "a" atualiza para adicionar informações
fprintf(file, ","); //salva a variável ","  para separar as informações salvas
fclose(file); // fecha o arquivo

printf("Digite o sobrenome a ser cadastrado:"); // coletando informações do usuário 
scanf("%s", sobrenome); // refere-se a string

file =fopen(arquivo, "a"); // abri o arquivo salvo e o "a" atualiza para adicionar informações
fprintf(file,sobrenome); // salva o valor da variável
fclose(file); // fecha o arquivo

file = fopen(arquivo, "a"); //abri o arquivo salvo e o "a" ataualiza para adicionar informações 
fprintf(file, ","); // salva a variável "," para separar as Informações salvas
fclose(file); // fecha o arquivo 

printf("Digite o cargo a ser cadastrado:"); //coletando informações do usuário 
scanf("%s", cargo); //%s refere-se a sting 

file = fopen(arquivo, "a"); // abro o arquivo salvo e o "a" atualiza para adicionar informações 
fprintf(file,cargo); // salva o valor da variável
fclose(file); // fecha o arquivo

system("pause"); //pausa o systema




}

int consulta()
{
	setlocale(LC_ALL,"Portuguese"); //Definindo a Linguagem

//Inicio da criação de variáveis/string	
	char cpf[40];
	char conteudo[200];
	//final da criação de variáveis

	
	printf("Digite o cpf a ser consultado:"); //coletando informações do usuário
	scanf("%s",cpf); //%s refere-se a string
	
	FILE *file; //cria o arquivo
	file = fopen(cpf,"r"); //Abre a variavel cpf e "r"significa ler
	
	if(file == NULL)// se a variavel não for existente ou nulo 
	{
		printf("Não foi possivel abrir o arquivo, não localizado!.\n");// Comunica ao usuário que o arquivo digitado não existe
	}
	
	while(fgets(conteudo, 200, file) != NULL)// enquanto existir um conteudo com variaveis de até 200 carcters 
	
	{
		printf("\nEssas são as informações do usuário: ");// comunica ao usuário
		printf("%s", conteudo); //%s refere-se a string
		printf("\n\n");// barra n pula linhas
	}
	
	system("pause");//pausa o sistema
}


int deletar()
{
	// Início da criação de variaveis/string
	char cpf[40];
	//final da criação de variáveis
	
	printf("Digite o cpf do usuário a ser deletado: ");//coletando informações 
	scanf("%s",cpf);//%s refere-se a string
	
	remove(cpf);//deleta a variavel
	
	FILE *file; //cria o arquivo
	file = fopen(cpf,"r");//abre o string "r" significa ler
	
	if(file == NULL)//se não for encontrado =nulo
	{
		printf("O usuário não se encontra no sistema!.\n");//comunica ao usuario
		system("pause");// pausa o sistema 
	}
}


int main()
{
	int opcao=0; //Definindo variáves
	int laco=1;
	
	for(laco=1;laco=1;)
	{
		
	
	     system("cls");
	
 	     setlocale(LC_ALL,"Portuguese"); //Definindo a Linguagem
	
	
	
   	    printf("### Cartório da Ebac ###\n\n"); // Inicio do Menu
	    printf("Escolha a opção desejada do menu:\n\n");
    	printf("\t1 - Registrar Nomes\n");
	    printf("\t2 - Consultar Nomes\n");
    	printf("\t3 - Deletar Nomes\n\n");
		printf("\t4 - Sair do sistema\n\n");
    	printf("Opção: "); //Fim do Menu
	
	
 	    scanf("%d", &opcao); //Armazenando a escolha do Usuário
	
        system("cls");//responsavel por limpar a tela 
		
		switch(opcao)//inicio da seleção do menu
		{
		case 1:
		registro();//chamada de funções
		break;
        
        case 2:
        consulta();
		break;
		
		case 3:
	    deletar();
		break;
		
		case 4:
			printf("Obrigado por utilizar o sitema!\n");
			return 0;
			break;
		
		default:
		printf("Esta opção não está disponivel!\n");
		system("pause");
		break;
		
	}
		//fim da seleção
			
		}	
	
     
}
	
	
	

