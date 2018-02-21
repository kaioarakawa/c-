#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void camp();
void camploc();
void suite();
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int opc;
	
	for(;;)
	{
		system("cls");
		printf("_________________________________\n");
		printf("|1-CAMPING            |\n");
		printf("|2-CAMPING COM LOCAÇÃO|\n");
		printf("|3-SUITE              |\n");
		printf("_________________________________\n");
	printf ("Digite qual a opção desejada:\n ");
	scanf("%i",&opc);
	system("cls");
	
	if(opc==1)
	{
		camp();
	}
	else if(opc==2)
	{
		camploc();
	}
	else if(opc==3)
	{
		suite();
		
	}
	else
	{
		printf("Opção errada tente novamente\n");
		
	}
	}
	
}

void camp()
{
	char nome[20];
	float valortotal=0;
	int qnt=0;
	int in=0;
	int out=0;
	int qnt2=0;
	int diarias=0;
	float perct=0;
	printf("Digite o nome da pessoa \n");
	scanf(" %[^\n]s",&nome);
	system("cls");
	
	printf("Digite quantas pessoas adultas no camping\n");
	scanf("%i",&qnt);
	system("cls");
	
	printf("Digite quantas crianças no camping\n");
	scanf("%i",&qnt2);
	system("cls");
	
	printf("Digite a data de check-in\n");
	scanf("%i",&in);
	system("cls");
	
	printf("Digite a data de check-out\n");
	scanf("%i",&out);
	system("cls");
	
	diarias=out-in;
	if(qnt!=0)
	{
	valortotal=50*qnt;
	}
	if(qnt!=0)
	{
	valortotal+=(25*qnt2);
	}
	valortotal*=diarias;
	
	
	printf("O valor para %i adultos, %i crianças e com %i diarias deu:  %.2f \n",qnt,qnt2,diarias,valortotal);
	printf("Digite o valor da porcentagem do desconto: \n");
	scanf("%f",&perct);
	if (perct!=0)
	{
	valortotal-=(valortotal*(perct/100));
	}
	system("cls");
	
	printf("Bom Dia, Sr %s \n",nome);
	printf("A Família Fazenda Sakurá agradece o seu contato !\n");
	printf("Segue as informações solicitadas\n");
	printf("Para os dias %i a %i esta saindo a %.2f para %i adultos e %i crianças,\n",in,out,valortotal,qnt,qnt2);
	printf("incluído toda a estrutura de lazer(Piscina, Rio, Campo-Gramado, Lagos Ornamentais, Pesca Esportiva, FAST Tirolesa) Banheiro feminino e masculino, ducha quente, iluminação pontos de energia e area social compartilhada\n \n \n");
	system("pause");
	system("cls");
	
}

void camploc()
{
	char nome[20];
	float valortotal=0;
	int qnt=0;
	int in=0;
	int out=0;
	int qnt2=0;
	int diarias=0;
	float perct=0;
	printf("Digite o nome da pessoa \n");
	scanf(" %[^\n]s",&nome);
	system("cls");
	
	printf("Digite quantas pessoas adultas no camping\n");
	scanf("%i",&qnt);
	system("cls");
	
	printf("Digite quantas crianças no camping\n");
	scanf("%i",&qnt2);
	system("cls");
	
	printf("Digite a data de check-in\n");
	scanf("%i",&in);
	system("cls");
	
	printf("Digite a data de check-out\n");
	scanf("%i",&out);
	system("cls");
	
	diarias=out-in;
	if(qnt!=0)
	{
	valortotal=75*qnt;
	}
	if(qnt!=0)
	{
	valortotal+=(40*qnt2);
	}
	valortotal*=diarias;
	
	
	printf("O valor para %i adultos, %i crianças e com %i diarias deu:  %.2f \n",qnt,qnt2,diarias,valortotal);
	printf("Digite o valor da porcentagem do desconto: \n");
	scanf("%f",&perct);
	if (perct!=0)
	{
	valortotal-=(valortotal*(perct/100));
	}
	system("cls");
	
	printf("Bom Dia, Sr %s \n",nome);
	printf("A Família Fazenda Sakurá agradece o seu contato !\n");
	printf("Segue as informações solicitadas\n");
	printf("Para os dias %i a %i esta saindo a %.2f para %i adultos e %i crianças,\n",in,out,valortotal,qnt,qnt2);
	printf("incluído toda a estrutura de lazer(Piscina, Rio, Campo-Gramado, Lagos Ornamentais, Pesca Esportiva, FAST Tirolesa) Banheiro feminino e masculino, ducha quente, iluminação pontos de energia e area social compartilhada\n \n \n");
	system("pause");
	system("cls");
	
}

void suite()
{
	int qnt=0;
	char nome[20];
	int in=0;
	int out=0;
	int diarias=0;
	float valor=0;
	int opc=0;
	float perct=0;
	
	printf("Digite o nome da pessoa\n");
	scanf(" %[^\n]s",&nome);
	system("cls");
	printf("Digite para quantas pessoas será a suite \n");
	scanf("%i",&qnt);
	system("cls");
	
	if (qnt>0 && qnt<=2)
	{
	printf("Digite a data de check-in \n");
	scanf("%i",&in);
	system("cls");
	system("cls");
	printf("Digite a data de check-out \n");
	scanf("%i",&out);
	system("cls");
	system("cls");
	diarias=out-in;
	if (diarias==1)
	{
		valor=270.00;
	}
	else if (diarias==2)
	{
		valor=500.00;
	}
	else if (diarias==3)
	{
		valor=720.00;
	}
	else if (diarias==4)
	{
		valor=920.00;
	}
	else if (diarias==5)
	{
		valor=1150.00;
	}
	else
	{
		printf("Diaria incorreta voltando ao menu\,");
		goto diariasinco;
	}
	voltei:
	printf("A pessoas deseja com meia pensão?(1-SIM ou 2-NãO) \n");
	scanf("%i",&opc);
	system("cls");
	if (opc==1)
	{
		valor+=((qnt*35.00)*diarias);
	}
	else if (opc<0 || opc>2)
	{
				printf("Numero não determinado, tente novamente");
		goto voltei;	
	}
	diariasinco:
	system("cls");
	}
	
						else if (qnt==3)
					{
	printf("Digite a data de check-in \n");
	scanf("%i",&in);
	system("cls");
	printf("Digite a data de check-out \n");
	scanf("%i",&out);
	system("cls");
	diarias=out-in;
	if (diarias==1)
	{
		valor=375.00;
	}
	else if (diarias==2)
	{
		valor=690.00;
	}
	else if (diarias==3)
	{
		valor=990.00;
	}
	else if (diarias==4)
	{
		valor=1260.00;
	}
	else if (diarias==5)
	{
		valor=1575.00;
	}
	else
	{
		printf("Diaria incorreta voltando ao menu\n");
		goto diariasinco1;
	}
	voltei1:
	printf("A pessoas deseja com meia pensão?(1-SIM ou 2-NãO) \n");
	scanf("%i",&opc);
	if (opc==1)
	{
		valor+=((qnt*35.00)*diarias);
	}
	else if (opc<0 || opc>2)
	{
		printf("Numero não determinado, tente novamente");
		goto voltei1;	
	}
	diariasinco1:
system("cls");	
}
	
						else if (qnt==4)
	{
	printf("Digite a data de check-in \n");
	scanf("%i",&in);
	system("cls");
	printf("Digite a data de check-out \n");
	scanf("%i",&out);
	system("cls");
	diarias=out-in;
	if (diarias==1)
	{
		valor=500.00;
	}
	else if (diarias==2)
	{
		valor=920.00;
	}
	else if (diarias==3)
	{
		valor=1320.00;
	}
	else if (diarias==4)
	{
		valor=1680.00;
	}
	else if (diarias==5)
	{
		valor=2100.00;
	}
	else
	{
		printf("Diaria incorreta voltando ao menu");
		goto diariasinco2;
	}
	voltei2:
	printf("A pessoas deseja com meia pensão?(1-SIM ou 2-NãO) \n");
	scanf("%i",&opc);
	if (opc==1)
	{
		valor+=((qnt*35.00)*diarias);
	}
	else if (opc<0 || opc>2)
	{
				printf("Numero não determinado, tente novamente");

		goto voltei2;	
	}
	diariasinco2:
	system("cls");
	}
						else if (qnt==5)
	{
	printf("Digite a data de check-in \n");
	scanf("%i",&in);
	system("cls");
	
	printf("Digite a data de check-out \n");
	scanf("%i",&out);
	system("cls");
	
	diarias=out-in;
	if (diarias==1)
	{
		valor=625.00;
	}
	else if (diarias==2)
	{
		valor=1150.00;
	}
	else if (diarias==3)
	{
		valor=1650.00;
	}
	else if (diarias==4)
	{
		valor=2100.00;
	}
	else if (diarias==5)
	{
		valor=2625.00;
	}
	else
	{
		printf("Diaria incorreta voltando ao menu");
		goto diariasinco3;
	}
	voltei3:
	printf("A pessoas deseja com meia pensão?(1-SIM ou 2-NãO) \n");
	scanf("%i",&opc);
	if (opc==1)
	{
		valor+=((qnt*35.00)*diarias);
	}
	else if (opc<0 || opc>2)
	{
				printf("Numero não determinado, tente novamente");

		goto voltei3;	
	}
	diariasinco3:
	system("cls");
	}
	
						else if (qnt==6)
	{
	printf("Digite a data de check-in \n");
	scanf("%i",&in);
	system("cls");
	
	printf("Digite a data de check-out \n");
	scanf("%i",&out);
	system("cls");
	
	diarias=out-in;
	if (diarias==1)
	{
		valor=750.00;
	}
	else if (diarias==2)
	{
		valor=1380.00;
	}
	else if (diarias==3)
	{
		valor=1980.00;
	}
	else if (diarias==4)
	{
		valor=2520.00;
	}
	else if (diarias==5)
	{
		valor=3150.00;
	}
	else
	{
		printf("Diaria incorreta voltando ao menu\n");
		goto diariasinco5;
	}
	voltei5:
	printf("A pessoas deseja com meia pensão?(1-SIM ou 2-NãO) \n");
	scanf("%i",&opc);
	system("cls");
	if (opc==1)
	{
		valor+=((qnt*35.00)*diarias);
	}
	else if (opc<0 || opc>2)
	{
				printf("Numero não determinado, tente novamente");

		goto voltei5;	
	}
	diariasinco5:
	system("cls");
	}
	
	printf("Digite o desconto \n");
	scanf("%f",&perct);
	system("cls");
	
	if (perct!=0)
	{
		valor-=(valor*(perct/100));		
	}
		printf("Bom Dia, Sr %s \n",nome);
	printf("A Família Fazenda Sakurá agradece o seu contato !\n");
	printf("Segue as informações solicitadas\n");
	printf("Para os dias %i a %i esta saindo a %.2f para %i adultos e %i crianças,\n",in,out,valor,qnt);
	printf("incluído toda a estrutura de lazer(Piscina, Rio, Campo-Gramado, Lagos Ornamentais, Pesca Esportiva, FAST Tirolesa) Banheiro feminino e masculino, ducha quente, iluminação pontos de energia e area social compartilhada\n \n \n");
	system("pause");
	system("cls");	
}
