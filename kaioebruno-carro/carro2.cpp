# include <stdio.h>
# include <stdlib.h>
#include <conio.h>
#include <Windows.h>
# include <string.h>
#include <iostream> 

int main(){
//variaveis do programa
char acel[2]="w";
char tecla[1];
char teclac[1];
int cont=0;
int conti;
int contcrash=0;
int random[10];
int i=0;
int obst=0;
int contdes=0;


//	aplica��o dos randons de curva
	random[0]=1;
	random[1]=0;
	random[2]=1;
	random[3]=0;
	random[4]=1;
	random[5]=0;
	random[6]=1;
	random[7]=0;
	random[8]=1;
	random[9]=0;
//	tela de inicio do jogo
		printf("Iniciando o Jogo!!");
		  Beep (330,100);Sleep(100);
        Beep (330,100);Sleep(300);
        Beep (330,100);Sleep(300);
        Beep (262,100);Sleep(100);
        Beep (330,100);Sleep(300);
        Beep (392,100);Sleep(700);
        Beep (196,100);Sleep(700);
        Beep (262,300);Sleep(300);
        Beep (196,300);Sleep(300);
        Beep (164,300);Sleep(300);
        Beep (220,300);Sleep(100);
        Beep (246,100);Sleep(300);
        Beep (233,200);
	system("cls");
	printf("--------------------------------------Ola Bem vindo a Racer KTBL----------------------------------------------\n\n\n\n");
	printf("Regras do jogo\n");
	printf("W-Acelerar\n");
	printf("S-Desacelerar\n");
	printf("A-Esquerda\n");
	printf("D-Direita\n\n\n\n");
	
	system("pause");
	system("cls");

//	variaveis para velocidade e tempo
	int velocidade=0;
	int tempo=0;
//	for para n�o parar a corrida
for(;;){
	
//		if para finalizar com vitoria
		if(obst==10){
		system("cls");
		system("color F4");
		printf("\n\n\nWINSSS!!!!!!!!!!!!!\n\n\n");
		Sleep(2000);
		break;
	}
//	if para terminar com game over
	if(contcrash==2 ){
		system("cls");
		system("color 04");
		printf("\n\n\nGAME OVERR\n\n\n");
		Sleep(150);
		system("cls");
		system("color 07");
		printf("\n\n\nGAME OVERR\n\n\n");
		Sleep(150);
		system("cls");
		system("color 07");
		printf("\n\n\nGAME OVERR\n\n\n");
		Sleep(150);
		system("cls");
		system("color 04");
		printf("\n\n\nGAME OVERR\n\n\n");
		system("cls");
		printf("\n\n\nGAME OVERR\n\n\n");
		system("cls");
		printf("\n\n\nGAME OVERR\n\n\n");
//		beep de star wars
		Beep (392,350);Sleep(100);
        Beep (392,350);Sleep(100);
        Beep (392,350);Sleep(100);
        Beep (311,250);Sleep(100);
        Beep (466,25);Sleep(100);
        Beep (392,350);Sleep(100);
        Beep (311,250);Sleep(100);
        Beep (466,25);Sleep(100);
        Beep (392,700);Sleep(100);
        Beep (587,350);Sleep(100);
        Beep (587,350);Sleep(100);
        Beep (587,350);Sleep(100);
        Beep (622,250);
		break;
	}
	fflush(stdin);
//	verificar se tem alguma tecla sendo pressionada
	while(!kbhit()){
//			verifica se esta parado ou desacelerando
			if(velocidade < 1){
				printf("Parado!!\n\n");
				contdes++;
				if(contdes==30){

						system("color 04");
			printf("\n\n\nOCIOSO\n\n\n");
			Sleep(150);
			system("cls");
			system("color 07");
			printf("\n\n\nOCIOSO\n\n\n");
			Sleep(150);
			system("cls");
			system("color 07");
			printf("\n\n\nOCIOSO\n\n\n");
			Sleep(150);
			system("cls");
			system("color 04");
			printf("\n\n\nOCIOSO\n\n\n");
			system("cls");
			printf("\n\n\nOCIOSO\n\n\n");
			system("cls");
			printf("\n\n\nOCIOSO\n\n\n");
			system("color 0F");
		
			Sleep(2000);
				}

			}else{
				printf("Desacelerando!! ----------------- %i Km/h \n\n",velocidade);
				velocidade--;
			}
			Sleep(150);
	}
//		verifica��o se tem alguma tecla sendo pressionada
		while(kbhit()){
		tecla[0]=getch();
//		tecla se para acelerar
		if(strcmp(tecla,"w")==1 || strcmp(tecla,"W")==1){

				if(velocidade > 350){
					printf("Velocidade Maxima !!!\n\n");
				}else{
					printf("Acelerando  ----------------- %i Km/h\n\n",velocidade);
					velocidade++;	
					Sleep(150);
					
					cont++;
					if((cont%20)==0){
						obst++;
						printf("Obstaculo se aproximando em\n");
						Sleep(300);
						printf("3\n");
						Sleep(300);
						printf("2\n");
						Sleep(300);
						printf("1\n");
						
//						random para saber mudas a curva
						if(random[i]==1){
							i++;
							printf("\n\nPressione a tecla d      Nao Esque�a de Apagar as teclas inportunas!!!\n\n\n");
							Sleep(700);
							fflush(stdin);
							gets(teclac);
							if(strcmp(teclac,"d")!=0){
								system("color 4F");
								Beep(650,500);  
								contcrash++;
								Sleep(500);
								system("color 0F");
								
							}else{	
							printf("Curva feita com sucesso!!! Niceee\n\n");
							}
							
						}else if(random[i]==0){
							i++;
							printf("\n\nPressione a tecla a     Nao Esque�a de Apagar as teclas inportunas!!!\n\n\n");
							Sleep(700);
							gets(teclac);
							if(strcmp(teclac,"a")!=0 || strcmp(tecla,"A")==1 ){
								system("color 4F");
								Beep(650,500);  
								contcrash++;
								Sleep(500);
								system("color 0F");
								
							}else{
								printf("Curva feita com sucesso!!! Niceee\n\n");		
							}
											
						}
				}
			
		}
		}else if(strcmp(tecla,"s")==1 || strcmp(tecla,"S")==1) {
			if(velocidade < 1){
				printf("Parado!!\n\n");
				
			}else if(velocidade>5){
				printf("Desacelerando!! ----------------- %i Km/h \n\n",velocidade);
				velocidade=velocidade-5;
			}
			Sleep(150);
		
				
		}
		
	}

		
}

system("pause");
}
