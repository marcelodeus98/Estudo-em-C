#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define MAX 200

typedef struct projeto{
 int  code;
 char title[42];
 char Descricao[42];
 char year[42];
 char status[42];
 char maneger[42];
 char final_year[42];
 char particants[42];
 char investments[42];
}base_projects;

int posicao = 0;

void registerProject(base_projects cadastro[MAX]);
void relatorioProjeto(base_projects cadastro[MAX]);
void buscarcode(base_projects cadastro[MAX]);
void buscarNome(base_projects cadastro[MAX]);

void registerProject(base_projects cadastro[MAX]){
	system("clear");

	printf("\n CADASTRE OS PROJETOS");

	char resp = '1';
	
	while(resp == '1' && posicao <= MAX){
		posicao++;
		printf("\nCódigo: %d ", posicao);
		
	    cadastro[posicao].code = posicao;
		printf("\nInforme o title do Projeto: ");
		fflush(stdin);
		scanf("%s%*c",cadastro[posicao].title);
	
		cadastro[posicao].code = posicao;
		printf("\nInforme o nome do maneger: ");
		fflush(stdin);
		scanf("%s%*c",cadastro[posicao].maneger);
		
		cadastro[posicao].code = posicao;
		printf("\nInforme a Descrição: ");
		fflush(stdin);
		scanf("%s%*c",cadastro[posicao].Descricao);
		
		cadastro[posicao].code = posicao;
		printf("\nInforme o status: ");
		fflush(stdin);
		scanf("%s%*c",cadastro[posicao].status);
		
		cadastro[posicao].code = posicao;
		printf("\nInforme o ano: ");
		fflush(stdin);
		scanf("%s%*c",cadastro[posicao].year);

        cadastro[posicao].code = posicao;
		printf("\nInforme o ano de entrega do projeto: ");
		fflush(stdin);
		scanf("%s%*c",cadastro[posicao].final_year);
		
        cadastro[posicao].code = posicao;
		printf("\nInforme o valor investido no projeto: ");
		fflush(stdin);
		scanf("%s%*c",cadastro[posicao].investments);

        cadastro[posicao].code = posicao;
		printf("\nInforme a quantidade de participantes do projeto: ");
		fflush(stdin);
		scanf("%s%*c",cadastro[posicao].particants);

		if(posicao < MAX){
			printf("\n\nDeseja cadastrar novo Projeto? [s] Sim [n] Não: ");
			fflush(stdin);
			scanf("%c", &resp);
		}else{
			printf("\nSua base de Dados já chegou ao limite!!!\n");
			resp = 'n';
		}
	}
}



void imprimirTodos(base_projects cadastro[MAX]){
	system("clear");

	printf("\n PROJETOS ");

	int linha=1;
	
	if(posicao >= 1){
		while(linha <= posicao){
			printf("%d - %s\n", cadastro[linha].code, cadastro[linha].title);
			printf("%d - %s\n", cadastro[linha].code, cadastro[linha].maneger);
			printf("%d - %s\n", cadastro[linha].code, cadastro[linha].Descricao);
			printf("%d - %s\n", cadastro[linha].code, cadastro[linha].status);
			printf("%d - %s\n", cadastro[linha].code, cadastro[linha].year);
			linha++;
		}	
			
	}else{
		printf("\nSem Registros Cadastrados\n");
	}	
	system("Pause");
}
void procurarcode(base_projects cadastro[MAX])
{
	system("clear");
int code, achou;
	printf("\n CÓDIGO do PROJETO?");

	printf("\nEntre com o código: ");
	scanf("%d", &code);
	achou = 0;
	int j = 0;
	while((achou == 0) && (j <= posicao)){
		if(code == cadastro[j].code){
			printf("\n%d - %s\n", cadastro[j].code, cadastro[j].maneger);
			achou = 1;
			system("Pause");
		}
		j++;
	}
		if(achou == 0 ){
			printf("\nRegistro não encontrado com o código %d \n", code);
			system("Pause");
		}
}
void buscarstatus(base_projects cadastro[MAX]){
	system("clear");
	char status[42];
	int achou, j;

	printf("\n BUSCA POR status DO PROJETO --> ");
    printf("\n --> Entre com o status (idêntico ao digitado): ");
    printf("\n ************* \n");
	printf("\n digite 1 para: Projetos, A fazer");
    printf("\n ************* \n");   
    printf("\n digite 2 para: Projetos, Fazendo");
    printf("\n ************* \n");
    printf("\n digite 3 para: Projetos, Concluídos \n");
	fflush(stdin);
	scanf("%s",status);
	achou = 0;
	j = 0;
	while((achou == 0) && (j < MAX)){
		if(strcmp(cadastro[j].status, status)==0){
			printf("\n%d - %s\n", cadastro[j].code, cadastro[j].status);
			achou = 1;
			system("Pause");
		}
		j++;
	}
	if(achou == 0 ){
		printf("\nRegistro não encontrado com o nome %s \n", status);
		system("Pause");
	}
}



int main()
{
	
	setlocale (LC_ALL, "Portuguese");
 int busca, i, j, acha, op;
 base_projects cadastro[MAX];
    int continuar=1;
    int posicao = 0;
	
	system("clear");
    do
    { 
        	system("cls");
         printf("Escolha a operação: \n 1 - Cadastrar um Projeto \n 2 - Imprimir todos os projetos \n 3 - Busca por código \n 4 - Busca por status \n " );
 printf(" 0 - Sair do progama \n");
 printf("Digite a opção desejada: ");
        scanf("%d", &continuar);
   	

        switch(continuar)
        { 
        	case 1:
				registerProject(cadastro);			
				break;
			case 2:
				imprimirTodos(cadastro);
				break;
			case 3:
				procurarcode(cadastro);
				break;
			case 4:
				buscarstatus(cadastro);
				break;
		   
			case 0:
				printf("\n SAÍNDO \n");
				system("Pause");
				break;
			default:
				printf("\n Opção INEXISTENTE \n");
				system("Pause");
        }
    } while(continuar);
    return 0;
}