#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>

struct cli{
	char nome[20];
	char sexo[20];
	char nasc[20];
	char cpf[20];
	char tel[20];
	char email[50];
	int tipo;
};

int i=0;
void cadastro ();
void alte ();
void ex();
void consulta();
void list();
void reativar();

struct cli c[9999];

main ()
{
	setlocale(LC_ALL,"Portuguese");
	int opc;
	
	for (;;)
	{
		system("color 0F");
		system("cls");
		printf("_____________________________________\n");
		printf("  1-Cadastro de clientes\n  ");
		printf("2-Alteração dos dados dos clientes \n  ");
		printf("3-Exclusão de clientes \n  ");
		printf("4-Consulta de clientes \n  ");
		printf("5-Listar todos os clientes \n  ");
		printf("6-Reativar uma conta\n  ");
		printf("7-Finalizar\n");
		printf("______________________________________\n");
		printf(" \n Digite a opção desejada: \n");
		scanf("%i",&opc);
		system("cls");
		
		if (opc==1)
		{
		cadastro ();	
		}
			else if (opc==2)
			{
			 alte();
			}
				else if (opc==3)
				{
				 ex();
				}
					else if (opc==4)
					{
						consulta();
					
					}
						else if (opc==5)
						{
						 	list();
						}
						else if (opc==6)
						{
							reativar();
						}
		else if (opc==7)
		{
			system("color F4");
			printf("Muito Obrigado por utilizar o cadastro 2000!!! \n");
int n=1;
printf(" Musica : Fear of the Dark - Iron Maiden\n");

while(n <=2){
Beep(293,250);
Beep(293,250);
Beep(220,250);
printf(" _________   ___        __________   __________   __________   __________  ___________  ___________   ____________\n");
printf("|o|	|o|  |o|       |oooooooooo| |oooooooooo| |oooooooooo| |oooooooooo| |oooooooooo| |oooooooooo| |oooooooooooo|\n");
Beep(220,250);
Beep(293,250);
Beep(293,250);
Beep(330,250);
printf("|o|	|o|  |o|            |o|     |o|      |o| |o|      |o| |o|          |o|      |o| |o|                |o|\n");
printf("|o|	|o|  |o|            |o|     |oooooooooo| |o|______|o| |o|________  |o|      |o| |o|_____           |o|\n");
Beep(330,250);
Beep(349,250);
Beep(349,250);
Beep(330,250);
Beep(330,250);
printf("|o|	|o|  |o|            |o|     |o|  |o|     |oooooooooo| |oooooooooo| |o|      |o| |ooooooo|          |o|\n");
printf("|o|_____|o|  |o|_____       |o|     |o|    |o|   |o|      |o|  ________|o| |o|______|o| |o|                |o|\n");
Beep(293,250);
Beep(293,250);
Beep(330,250);
Beep(262,250);
printf("|ooooooooo|  |ooooooo|      |o|     |o|      |o| |o|      |o| |oooooooooo| |oooooooooo| |o|                |o|\n");
Beep(262,250);
Beep(196,250);
Beep(196,250);
Beep(262,250);
Beep(262,250);
Beep(293,250);
Beep(293,250);
Beep(330,250);
Beep(330,250);
Beep(293,250);
Beep(262,250);
Beep(262,250);
Beep(330,250);
Beep(262,250);
n++;
printf("\n \n \n \n \n");
}

			Sleep(2000);
			system("cls");
			printf("Finalizando");
			Sleep(500);
			printf(".");
			Sleep(500);
			printf(".");
			Sleep(500);
			printf(".");
			break;	
		}
		else
		{
			printf("Opção errada, tente novamente");
			Sleep(3000);
		}
		
	}
}

void cadastro()
{
	system("color 0E");
	int i2;
	i++;
			printf(" ----------------------------------------------------------------------\n");
              printf(" | ");
			  printf("\t\t\t          CADASTRO     ");
			  printf("\t\t\t      |\n");
              printf(" ----------------------------------------------------------------------\n");
              printf ("\n");
	printf("Digite o nome do cliente (Ou 0 para voltar ao menu) \n");
	scanf(" %[^\n]s",&c[i].nome);
	if(strcmp(c[i].nome,"0")==0)
	{
		i--;
		goto mano;
	}
	system("cls");
			printf(" ----------------------------------------------------------------------\n");
              printf(" | ");
			  printf("\t\t\t          CADASTRO     ");
			  printf("\t\t\t      |\n");
              printf(" ----------------------------------------------------------------------\n");
              printf ("\n");
	
	printf("Digite o sexo do cliente: \n");
	scanf(" %[^\n]s",&c[i].sexo);
	system("cls");
			printf(" ----------------------------------------------------------------------\n");
              printf(" | ");
			  printf("\t\t\t          CADASTRO     ");
			  printf("\t\t\t      |\n");
              printf(" ----------------------------------------------------------------------\n");
              printf ("\n");
	
	printf("Digite a data de nascimento do cliente  Formato(dd/mm/ano): \n");
	scanf(" %[^\n]s",&c[i].nasc);
	system("cls");
	
			printf(" ----------------------------------------------------------------------\n");
              printf(" | ");
			  printf("\t\t\t          CADASTRO     ");
			  printf("\t\t\t      |\n");
              printf(" ----------------------------------------------------------------------\n");
              printf ("\n");
	printf("Digite o CPF do cliente com pontos e traços: \n");
	scanf(" %[^\n]s",&c[i].cpf);
	system("cls");
	
			printf(" ----------------------------------------------------------------------\n");
              printf(" | ");
			  printf("\t\t\t          CADASTRO     ");
			  printf("\t\t\t      |\n");
              printf(" ----------------------------------------------------------------------\n");
              printf ("\n");
	printf("Digite o telefone do cliente: \n");
	scanf(" %[^\n]s",&c[i].tel);
	system("cls");
	
			printf(" ----------------------------------------------------------------------\n");
              printf(" | ");
			  printf("\t\t\t          CADASTRO     ");
			  printf("\t\t\t      |\n");
              printf(" ----------------------------------------------------------------------\n");
              printf ("\n");
	printf("Digite o e-mail do cliente: \n");
	scanf(" %[^\n]s",&c[i].email);
	system("cls");
	
	c[i].tipo=0;
	
	printf("\nApresente o codigo do cliente a ele. \n");
	printf("O codigo dele é %i \n",i);
	mano:
	system("pause");
}

void alte() 
{
	int oq;
	char at[20];
	char oq2[20];
	int i2;
	char pesq[20];
	system("color 06");
	if (i==0)
	{
		printf("Ainda não foi cadastrado ninguem!! \n");
		printf("Voltando ao menu\n");
	}
	else {
	printf("Digite 1 para procurar o codigo do cliente, ou 0 para continuar a alteração se ja tem o codigo(2 para voltar ao menu) \n");
	scanf("%i",&oq);
		if(oq==2)
	{
		goto meno;
	}
	else if (oq==1)
	{
		system("cls");
		printf("Digite o CPF do cliente \n");
		scanf(" %[^\n]s",&pesq);
		for(i2=1;i2<=i;i2++) 
		{
			if (strcmp(c[i2].cpf,pesq)==0)
			{
				printf("O codigo do cliente é:\n %i \n",i2);
				break;
			}
		}
	if (c[i2].tipo==1)
	{
		system("cls");
		printf("Cliente Excluido deseja ativa-lo novamente?(Sim OU Nao)\n");
		scanf("%s",&at);
		if (strcmp(at,"Sim")==0)
		{
		c[i2].tipo=0;
		printf("Cliente reativado, muito obrigado, prosseguindo...\n");
		Sleep(2000);
		system("cls");
		goto alte;
		}
		
		else if(strcmp(at,"Nao")==0) {
			printf("Voltando ao menu....");
			Sleep(2000);
		}
		
		else{
			system("cls");
			printf("Opção não existente, tente novamente");
			Sleep(2000);
			system("cls");
			printf("Voltando ao menu");
		}
	}else {
		system("cls");
	alte:		
	for(;;)
	{
	printf("Digite qual dado o cliente que mudar(Nome,Sexo,Data de nascimento,Telefone,E-mail) ou parar para finalizar a troca \n");
	scanf("%s",&oq2);
			
	system("cls");
	
	if (strcmp(oq2,"parar")==0)
	{
		printf("Alteração finalizada\n");
		break;
		Sleep(2000);
	}
	
	
	
	else if (strcmp(oq2,"Nome")==0)
	{
		
	printf("Digite o nome do cliente: \n");
	scanf(" %[^\n]s",&c[i2].nome);
	system("cls");
	printf("Alteração concluida");
	Sleep(1000);
	system("cls");
	}
	
	else if (strcmp(oq2,"Sexo")==0)
	{
				printf(" ----------------------------------------------------------------------\n");
              printf(" | ");
			  printf("\t\t\t          Mudança de dados iniciada para o cliente de codigo %i ",i2);
			  printf("\t\t\t      |\n");
              printf(" ----------------------------------------------------------------------\n");
              printf ("\n");

	printf("Digite o sexo do cliente: \n");
	scanf(" %[^\n]s",&c[i2].sexo);
	system("cls");
	printf("Alteração concluida");
	Sleep(1000);
	system("cls");
	
	}
	else if (strcmp(oq2,"Data de nascimento")==0)
	{
		printf(" ----------------------------------------------------------------------\n");
              printf(" | ");
			  printf("\t\t\t          Mudança de dados iniciada para o cliente de codigo %i ",i2);
			  printf("\t\t\t      |\n");
              printf(" ----------------------------------------------------------------------\n");
              printf ("\n");
	printf("Digite a data de nascimento do cliente  Formato(dd/mm/ano): \n");
	scanf(" %[^\n]s",&c[i2].nasc);
	system("cls");
	printf("Alteração concluida");
	Sleep(1000);
	system("cls");
	}
	
	else if (strcmp(oq2,"Telefone")==0)
	{
		printf(" ----------------------------------------------------------------------\n");
              printf(" | ");
			  printf("\t\t\t          Mudança de dados iniciada para o cliente de codigo %i ",i2);
			  printf("\t\t\t      |\n");
              printf(" ----------------------------------------------------------------------\n");
              printf ("\n");
	printf("Digite o telefone do cliente: \n");
	scanf(" %[^\n]s",&c[i2].tel);
	system("cls");
	printf("Alteração concluida");
	Sleep(1000);
	system("cls");
	}
	
	else if (strcmp(oq2,"E-mail")==0)
	{
	
		printf(" ----------------------------------------------------------------------\n");
              printf(" | ");
			  printf("\t\t\t          Mudança de dados iniciada para o cliente de codigo %i ",i2);
			  printf("\t\t\t      |\n");
              printf(" ----------------------------------------------------------------------\n");
              printf ("\n");
	printf("Digite o e-mail do cliente: \n");
	scanf(" %[^\n]s",&c[i2].email);
	system("cls");
	printf("Alteração concluida");
	Sleep(1000);
	system("cls");
	}
		else
	{
	printf("Opção Errada tente novamente \n");
	Sleep(2000);
	system("cls");
	}
	
	}
 		   }
	}
	else if(oq==0)
	{
		system("cls");
		printf("Digite o codigo do cliente \n");
		scanf("%i",&i2);
		system("cls");
		
		
			if((i2>i) || (i2<1))
	{
		printf("Desculpe ainda não ha essa codigo cadastrado\n");
		printf("Voltando ao menu");
		
		}
		
		
		
		else if (c[i2].tipo==1)
	{
		system("cls");
		printf("Cliente Excluido, deseja ativa-lo novamente?(Sim OU Nao)\n");
		scanf("%s",&at);
if (strcmp(at,"Sim")==0)
		{
		c[i2].tipo=0;
		printf("Cliente reativado, muito obrigado, prosseguindo...\n");
		Sleep(2000);
		system("cls");
		goto alte2;
		}
		
		 else if(strcmp(at,"Nao")==0) {
			printf("Voltando ao menu....\n");
		}
		
	else {
			system("cls");
			printf("Opção não existente, tente novamente");
			Sleep(2000);
			system("cls");
			printf("Voltando ao menu\n");
}
		
		}else {
			system("cls");
		alte2:	
	for(;;)
	{
	printf("Digite qual dado o cliente que mudar(Nome,Sexo,Data de nascimento,Telefone,E-mail) ou parar para finalizar a troca \n");
	scanf("%s",&oq2);
			
	system("cls");
	
	 if (strcmp(oq2,"parar")==0)
	{
		printf("Alteração finalizada");
		Sleep(2000);
		break;
	}
	
	
	
	else if (strcmp(oq2,"Nome")==0)
	{
	printf("Mudança de dados iniciada para o cliente de codigo %i \n \n",i2);	printf(" ----------------------------------------------------------------------\n");
              printf(" | ");
			  printf("\t\t\t          Mudança de dados iniciada para o cliente de codigo %i ",i2);
			  printf("\t\t\t      |\n");
              printf(" ----------------------------------------------------------------------\n");
              printf ("\n");	
	printf("Digite o nome do cliente: \n");
	scanf(" %[^\n]s",&c[i2].nome);
	system("cls");
	printf("Alteração concluida");
	Sleep(1000);
	system("cls");
	}
	
	else if (strcmp(oq2,"Sexo")==0)
	{
		printf(" ----------------------------------------------------------------------\n");
              printf(" | ");
			  printf("\t\t\t          Mudança de dados iniciada para o cliente de codigo %i ",i2);
			  printf("\t\t\t      |\n");
              printf(" ----------------------------------------------------------------------\n");
              printf ("\n");
	printf("Digite o sexo do cliente: \n");
	scanf(" %[^\n]s",&c[i2].sexo);
	system("cls");
	printf("Alteração concluida");
	Sleep(1000);
	system("cls");
	
	}
	else if (strcmp(oq2,"Data de nascimento")==0)
	{
	printf(" ----------------------------------------------------------------------\n");
              printf(" | ");
			  printf("\t\t\t          Mudança de dados iniciada para o cliente de codigo %i ",i2);
			  printf("\t\t\t      |\n");
              printf(" ----------------------------------------------------------------------\n");
              printf ("\n");
	printf("Digite a data de nascimento do cliente  Formato(dd/mm/ano): \n");
	scanf(" %[^\n]s",&c[i2].nasc);
	system("cls");
	printf("Alteração concluida");
	Sleep(1000);
	system("cls");
	}
	
	else if (strcmp(oq2,"Telefone")==0)
	{
		printf(" ----------------------------------------------------------------------\n");
              printf(" | ");
			  printf("\t\t\t          Mudança de dados iniciada para o cliente de codigo %i ",i2);
			  printf("\t\t\t      |\n");
              printf(" ----------------------------------------------------------------------\n");
              printf ("\n");
	printf("Digite o telefone do cliente: \n");
	scanf(" %[^\n]s",&c[i2].tel);
	system("cls");
	printf("Alteração concluida");
	Sleep(1000);
	system("cls");
	}
	
	else if (strcmp(oq2,"E-mail")==0)
	{
	
	printf(" ----------------------------------------------------------------------\n");
              printf(" | ");
			  printf("\t\t\t          Mudança de dados iniciada para o cliente de codigo %i ",i2);
			  printf("\t\t\t      |\n");
              printf(" ----------------------------------------------------------------------\n");
              printf ("\n");
	printf("Digite o e-mail do cliente: \n");
	scanf(" %[^\n]s",&c[i2].email);
	system("cls");
	printf("Alteração concluida");
	Sleep(1000);
	system("cls");
	}
	else
	{
	printf("Opção Errada tente novamente");
	Sleep(2000);
	system("cls");
	}
	}
}
}
	else
	{
	printf("Opção Errada tente novamente");
	Sleep(2000);
	system("cls");
	}
	
}
meno:
	system("pause");
}

void ex()
{
	int oq;
	char pesq[20];
	int i2;
	int cont=0;
	system("color 0F");
		for (i2=1;i2<=i;i2++)
	{
		if(c[i2].tipo==0)
		{
		cont++;
		}
		
	}
	if((i==0)||(cont==0))
	{
		printf("Ainda não foi cadastrado ninguem!! \n");
		printf("Voltando ao menu\n");
		system("pause");
	}
	else {
	printf("Digite 1 para procurar o codigo do cliente, ou 0 para continuar a alteração se ja tem o codigo(2 para voltar ao menu) \n");
	scanf("%i",&oq);
		if(oq==2)
	{
		goto meni;
	}
	else if (oq==1)
	{
		printf("Digite o CPF do cliente \n");
		scanf(" %[^\n]s",&pesq);
		system("cls");
		for(i2=1;i2<=i;i2++) 
		{
			if (strcmp(c[i2].cpf,pesq)==0)
			{
				printf("O codigo do cliente é:\n %i",i2);
				Sleep(2000);
				break;
			}
		}
		if (c[i2].tipo==1)
		{
			printf("O Cliente ja estava excluido\n");
			printf("voltando ao menu\n");
			system("pause");
		}
		else {
	c[i2].tipo=1;
	system("cls");
	printf("Cliente Excluido com sucesso\n");
	printf("\nVoltando ao menu\n");
	system("pause");
	}
	
	}else 
	{
		system("cls");
		printf("Digite o codigo do cliente\n");
		scanf("%i",&i2);
		if (c[i2].tipo==1)
		{
				printf("O Cliente ja estava excluido\n");
			printf("voltando ao menu\n");
			system("pause");
		}else {
		
		c[i2].tipo=1;
		system ("cls");
	printf("Cliente Excluido com sucesso\n");
	Sleep(2000);
	system("cls");
	meni:
	printf("Voltando ao menu\n");
	system("pause");
	}
	}
}
}

void consulta()
{
	char cons[20];
	int i2;
	char nom[20];
	int cont;
	char at[20];
	system("color 0B");
		for (i2=1;i2<=i;i2++)
	{
		if(c[i2].tipo==0)
		{
		cont++;
		}
		
	}
	if((i==0)||(cont==0))
	{
		printf("Ninguem ainda foi cadastrado.\n");
		Sleep(2000);
		system("cls");
		printf("Voltando ao menu\n");
		Sleep(2000);
		
	}
	else{
	novamente:
		printf(" ----------------------------------------------------------------------\n");
              printf(" | ");
			  printf("\t\t\t         Consulta ");
			  printf("\t\t\t      |\n");
              printf(" ----------------------------------------------------------------------\n");
              printf ("\n");
	printf("Qual tipo de consulta deseja fazer, por codigo ou nome?(2 para ir ao menu)\n");
	scanf(" %[^\n]s",&cons);
	system("cls");
		if(strcmp(cons,"2")==0)
	{
		goto meno;
	}
	
	if (strcmp(cons,"codigo")==0)
	{
		printf("Digite o codigo do usuario:\n ");
		scanf("%i",&i2);
		system("cls");
		
	printf("Cliente com codigo %i \t \t \t",i2);
	printf("Nome: %s \n",c[i2].nome);
	printf("Sexo: %s\n",c[i2].sexo);
	printf("Data de nascimento: %s\n",c[i2].nasc);
	printf("CPF: %s\n",c[i2].cpf);
	printf("Telefone: %s\n",c[i2].tel);
	printf("E-mail: %s\n",c[i2].email);
		if(c[i2].tipo==1)
	{
		printf("Cliente inativo\n");
		printf("\n\nCliente Excluido, deseja ativa-lo novamente?(Sim OU Nao)\n");
		scanf(" %[^\n]s",&at);
	if (strcmp(at,"Sim")==0)
		{
		c[i2].tipo=0;
		printf("Cliente reativado, muito obrigado, prosseguindo...\n");
		Sleep(2000);
		system("cls");
		}
		
		 else if(strcmp(at,"Nao")==0) {
	
		}
		
		else{
			system("cls");
			printf("Opção não existente, tente novamente");
			Sleep(2000);
			system("cls");
			printf("Voltando a consulta\n");
			Sleep(2000);
			system("cls");
			goto novamente;
		}
}
	
		
	}else if (strcmp(cons,"nome")==0)
{
	printf(" ----------------------------------------------------------------------\n");
              printf(" | ");
			  printf("\t\t\t         Consulta ");
			  printf("\t\t\t      |\n");
              printf(" ----------------------------------------------------------------------\n");
              printf ("\n");
	printf("Digite o nome completo de consulta\n");
	scanf(" %[^\n]s",&nom);
	
	for (i2=1;i2<=i;i2++)
	{
		if (strcmp(c[i2].nome,nom)==0)
		{
			printf("Nome encontrado");
			Sleep(1000);
			system("cls");
	printf("Dados de %s\t \t",c[i2].nome);
	printf("Cliente com codigo %i \n",i2);
	printf("Sexo: %s\n",c[i2].sexo);
	printf("Data de nascimento: %s\n",c[i2].nasc);
	printf("CPF: %s\n",c[i2].cpf);
	printf("Telefone: %s\n",c[i2].tel);
	printf("E-mail: %s\n",c[i2].email);
	if(c[i2].tipo==1)
	{
		printf("Cliente inativo\n");
		printf("Cliente Excluido, deseja ativa-lo novamente?(Sim OU Nao)\n");
		scanf(" %[^\n]s",&at);
	if (strcmp(at,"Sim")==0)
		{
		c[i2].tipo=0;
		printf("Cliente reativado, muito obrigado, prosseguindo...\n");
		Sleep(2000);
		system("cls");
		}
		
		 else if(strcmp(at,"Nao")==0) {
	system("cls");
	printf("Voltando ao menu...\n");
		}
		
		else{
			system("cls");
			printf("Opção não existente, tente novamente\n");
			Sleep(2000);
			system("cls");
			printf("Voltando ao menu\n");
		}
		}
			break;
		}else 
		{
			printf("Nome não encontrado, tente lista-los para encontra-lo\n");
			Sleep(2000);
			system("cls");
			printf("Voltando ao menu\n");
			Sleep(2000);
			break;
		}
}

	
	
}else
{
	printf("Opção errada, tente novamente \n");
	system("pause");
	system("cls");
	goto novamente;
}
}

meno:
	system("pause");
}


void list() 
{
	int i2;
	char dt[20];
	char at[20];
	int cont=0;
	system("color 09");
		for (i2=1;i2<=i;i2++)
	{
		if(c[i2].tipo==0)
		{
		cont++;
		}
		
	}
	if((i==0)||(cont==0))
	{
		printf("Nenhum cliente foi cadastrado ainda\n");
		Sleep(2000);
	}
else 
{
	printf(" ----------------------------------------------------------------------\n");
              printf(" | ");
			  printf("\t\t\t         Lista: ");
			  printf("\t\t\t      |\n");
              printf(" ----------------------------------------------------------------------\n");
              printf ("\n");
	volta:
	for (i2=1;i2<=i;i2++)
	{
	if(c[i2].tipo!=1)
	{
		
	printf("Cliente com codigo %i \t \t \t",i2);
	printf("Nome: %s \n \n ",c[i2].nome);
	}
	}
	
	
	printf("Quer detalhar algum cliente?(Sim OU Nao)\n");
	scanf("%s",&dt);
	if (strcmp(dt,"Sim")==0)
	{
			printf("Digite o codigo do cliente que é desejado o detalhamento\n");
	scanf("%i",&i2);
	if (c[i2].tipo==1)
	{
		printf("Cliente Excluido, Deseja ativa-lo novamente?(Sim OU Nao)");
		scanf("%s",&at);
		if (strcmp(at,"Sim")==0)
		{
		c[i2].tipo=0;
		printf("Cliente reativado, muito obrigado, prosseguindo...\n");
		Sleep(2000);
		system("cls");
		goto det;
		}
		
		 else if(strcmp(at,"Nao")==0) {
			printf("Voltando ao menu....");
			Sleep(2000);
		}
		
	else {
			system("cls");
			printf("Opção não existente, tente novamente");
			Sleep(2000);
			system("cls");
			printf("Voltando ao menu");
		}
	} else 
	{
	
	det:
	system("cls");
	
	printf("Cliente com codigo %i \t \t \t",i2);
	printf("Nome: %s \n",c[i2].nome);
	printf("Sexo: %s\n",c[i2].sexo);
	printf("Data de nascimento: %s\n",c[i2].nasc);
	printf("CPF: %s\n",c[i2].cpf);
	printf("Telefone: %s\n",c[i2].tel);
	printf("E-mail: %s\n",c[i2].email);
system("pause");
	system("cls");
	goto volta;
	}
	}else 
	{
		system("cls");
		printf("Impressão completa, voltando ao menu...");
		Sleep(2000);
	
	
	}
}
}

void reativar()
{	
	int oq;
	char pesq[20];
	int i2;
	int cont=0;
	system("color 0F");
		for (i2=1;i2<=i;i2++)
	{
		if(c[i2].tipo==1)
		{
		cont++;
		}
		
	}
	if((i==0)||(cont==0))
	{
		printf("Ninguem ainda foi desativado!! \n");
		printf("Voltando ao menu\n");
		system("pause");
	}
	else {
	printf("Digite 1 para procurar o codigo do cliente, ou 0 para continuar a alteração se ja tem o codigo(2 para voltar ao menu) \n");
	scanf("%i",&oq);
		if(oq==2)
	{
		goto mino;
	}
	else if (oq==1)
	{
		printf("Digite o CPF do cliente \n");
		scanf(" %[^\n]s",&pesq);
		system("cls");
		for(i2=1;i2<=i;i2++) 
		{
			if (strcmp(c[i2].cpf,pesq)==0)
			{
				printf("O codigo do cliente é:\n %i",i2);
				Sleep(2000);
				break;
			}
		}
		if (c[i2].tipo==0)
		{
			system("cls");
			printf("O Cliente não foi excluido\n");
			printf("voltando ao menu\n");
			system("pause");
		}else{
	c[i2].tipo=0;
	system("cls");
	printf("Cliente Reativado com sucesso\n");
	printf("\nVoltando ao menu\n");
	system("pause");
	}
	
	}else 
	{
		system("cls");
		printf("Digite o codigo do cliente\n");
		scanf("%i",&i2);
		if (c[i2].tipo==0)
		{
			system("cls");
			printf("O Cliente não foi excluido\n");
			printf("voltando ao menu\n");
			system("pause");
	}
	else {
		c[i2].tipo=0;
		system ("cls");
	printf("Cliente Reativado com sucesso\n");
	Sleep(2000);
	system("cls");
	mino:
	printf("Voltando ao menu\n");
	system("pause");
}
	}
}
}

		
