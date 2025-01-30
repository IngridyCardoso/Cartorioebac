#include <stdio.h> //biblioteca de comunicacao com o usuario
#include <stdlib.h> //biblioteca de alocacao de espaco em memoria
#include <locale.h> //biblioteca de alocacao de texto por regiao 
#include <string.h> //biblioteca respons�vel por cuidar das strings


int registro() //Fun��o respons�vel por cadastrar os usu�rios no sistema
{
	
//inicio da cria��o de vari�veis/string 	
char arquivo[40];
char cpf[40];
char nome[40];
char sobrenome[40];
char cargo[40];
//final da cria��o de vari�veis 

printf("Digite o CPF a ser cadastrado:\n"); //coletando informa��es do usu�rio
scanf("%s", cpf); //%s refere-se a string

strcpy(arquivo, cpf); //respons�vel por copiar os valores das string

FILE *file; //cria o arquivo
file = fopen(arquivo, "w"); //cria o arquivo e o "w" significa escrever write
fprintf(file,cpf); // salva o valor da variavel
fclose(file); // fecha o arquivo

file = fopen(arquivo, "a"); // abri o arquivo salvo e o "a" atualiza para adicionar informa��es  
fprintf(file,","); //salva a vari�vel "," para separar as irnforma��es salvas 
fclose(file); // fecha o arquivo

printf("Digite o nome a ser cadastrado:"); //coletando informa��es do Usu�rio
scanf("%s", nome); //%s refere-se a string

file = fopen(arquivo, "a"); //abri o arquivo salvo e o "a" atualiza para adicionar informa��es 
fprintf(file,nome); // salva o valor da vari�vel 
fclose(file); // fecha o arquivo

file = fopen(arquivo, "a"); // abri o aruivo salvo e o "a" atualiza para adicionar informa��es
fprintf(file, ","); //salva a vari�vel ","  para separar as informa��es salvas
fclose(file); // fecha o arquivo

printf("Digite o sobrenome a ser cadastrado:"); // coletando informa��es do usu�rio 
scanf("%s", sobrenome); // refere-se a string

file =fopen(arquivo, "a"); // abri o arquivo salvo e o "a" atualiza para adicionar informa��es
fprintf(file,sobrenome); // salva o valor da vari�vel
fclose(file); // fecha o arquivo

file = fopen(arquivo, "a"); //abri o arquivo salvo e o "a" ataualiza para adicionar informa��es 
fprintf(file, ","); // salva a vari�vel "," para separar as Informa��es salvas
fclose(file); // fecha o arquivo 

printf("Digite o cargo a ser cadastrado:"); //coletando informa��es do usu�rio 
scanf("%s", cargo); //%s refere-se a sting 

file = fopen(arquivo, "a"); // abro o arquivo salvo e o "a" atualiza para adicionar informa��es 
fprintf(file,cargo); // salva o valor da vari�vel
fclose(file); // fecha o arquivo

system("pause"); //pausa o systema




}

int consulta()
{
	setlocale(LC_ALL,"Portuguese"); //Definindo a Linguagem

//Inicio da cria��o de vari�veis/string	
	char cpf[40];
	char conteudo[200];
	//final da cria��o de vari�veis

	
	printf("Digite o cpf a ser consultado:"); //coletando informa��es do usu�rio
	scanf("%s",cpf); //%s refere-se a string
	
	FILE *file; //cria o arquivo
	file = fopen(cpf,"r"); //Abre a variavel cpf e "r"significa ler
	
	if(file == NULL)// se a variavel n�o for existente ou nulo 
	{
		printf("N�o foi possivel abrir o arquivo, n�o localizado!.\n");// Comunica ao usu�rio que o arquivo digitado n�o existe
	}
	
	while(fgets(conteudo, 200, file) != NULL)// enquanto existir um conteudo com variaveis de at� 200 carcters 
	
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");// comunica ao usu�rio
		printf("%s", conteudo); //%s refere-se a string
		printf("\n\n");// barra n pula linhas
	}
	
	system("pause");//pausa o sistema
}


int deletar()
{
	// In�cio da cria��o de variaveis/string
	char cpf[40];
	//final da cria��o de vari�veis
	
	printf("Digite o cpf do usu�rio a ser deletado: ");//coletando informa��es 
	scanf("%s",cpf);//%s refere-se a string
	
	remove(cpf);//deleta a variavel
	
	FILE *file; //cria o arquivo
	file = fopen(cpf,"r");//abre o string "r" significa ler
	
	if(file == NULL)//se n�o for encontrado =nulo
	{
		printf("O usu�rio n�o se encontra no sistema!.\n");//comunica ao usuario
		system("pause");// pausa o sistema 
	}
}


int main()
{
	int opcao=0; //Definindo vari�ves
	int laco=1;
	
	for(laco=1;laco=1;)
	{
		
	
	     system("cls");
	
 	     setlocale(LC_ALL,"Portuguese"); //Definindo a Linguagem
	
	
	
   	    printf("### Cart�rio da Ebac ###\n\n"); // Inicio do Menu
	    printf("Escolha a op��o desejada do menu:\n\n");
    	printf("\t1 - Registrar Nomes\n");
	    printf("\t2 - Consultar Nomes\n");
    	printf("\t3 - Deletar Nomes\n\n");
		printf("\t4 - Sair do sistema\n\n");
    	printf("Op��o: "); //Fim do Menu
	
	
 	    scanf("%d", &opcao); //Armazenando a escolha do Usu�rio
	
        system("cls");//responsavel por limpar a tela 
		
		switch(opcao)//inicio da sele��o do menu
		{
		case 1:
		registro();//chamada de fun��es
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
		printf("Esta op��o n�o est� disponivel!\n");
		system("pause");
		break;
		
	}
		//fim da sele��o
			
		}	
	
     
}
	
	
	

