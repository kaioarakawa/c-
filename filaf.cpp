#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>




struct pessoas {
		char nome[50];
		int idade;
};

struct pessoas menor[5];
struct pessoas maior[5];
int cont;
int insert=0;
int i;
int remov=0;
int insert60=0;
int remov60=0;
char nome[50];
int id;

void inse() {
	printf("\n\n\nDigite a idade da pessoa para ser colocado na fila\n\n");
	scanf("%i", &id);
	fflush(stdin);		
	printf("\n\n\nDigite o nome da pessoa para ser colocado na fila\n\n");
	gets(nome);
	fflush(stdin);
	

	if(id<60){
		for(i=0;i<5;i++){
			if(strlen(menor[i].nome)==0){
				cont++;
			}
		}
		if (cont==0 ) {
			printf("fila cheia\n\n");
		}else{
				if(insert==4){
					insert=0;
				}
				
				
		strcpy(menor[insert].nome,nome);
		menor[insert].idade=id;

	
	
		insert++;
		printf("\n\n Insert na fila normal\n\n");
		}
		cont=0;
		}else if (id >= 60) {
				for(i=0;i<5;i++){
				if(strlen(maior[i].nome)==0){
					cont++;
				}
			}
			if (cont==0 ) {
				printf("fila cheia\n\n");
			}else{
				if(insert==5){	
					insert60=0;
					
				}
			strcpy(maior[insert60].nome,nome);
			maior[insert60].idade=id;
	
		
			insert60++;
			printf("\n\n Insert na fila de idosos\n\n");
		}
		cont=0;
		
	}
		
}


void remove() {
	int opc;
	volt:
	printf("Deseja retirar da fila de idosos ou da fila normal?\n");
	printf("1-Idosos\n");
	printf("2-Normal\n");
	scanf("%d",&opc);
		if(opc==2){
			for(i=0;i<5;i++){
				if(strlen(menor[i].nome)==0){
					cont++;
				}
			}
			if (cont>4) {
				printf("Fila vazia\n\n");
			}else{
				if(remov==4){
					remov=0;
				}
		
				printf("\n\nRemovendo o %s de idade %i\n\n",menor[remov].nome,menor[remov].idade );
				strcpy(menor[remov].nome, "");
				menor[remov].idade = -1;
				remov++;
			
				printf("\nRemove da fila normal\n\n");
				}
		}else if(opc==1){
			for(i=0;i<5;i++){
				if(strlen(maior[i].nome)==0){
					cont++;
				}
			}
			if (cont>4) {
				printf("Fila vazia\n\n");
			}else{
				if(remov==4){
					remov60=0;
				}
		
				printf("\n\nRemovendo o %s de idade %i\n\n",maior[remov].nome,maior[remov].idade );
				strcpy(maior[remov60].nome,"");
				maior[remov60].idade = -1;
				remov60++;
			
				printf("\nRemove da fila de idosos\n\n");
			}
		}else{
			printf("Opção inexistente!!");
			goto volt;
		}
	cont=0;
}




//agora a int main com o cadastro, em cima apenas as functions


int main(){
int opc;
int c;


	for(i=0;i<5;i++){
		strcpy(maior[i].nome,"");
		maior[i].idade=-1;
		strcpy(menor[i].nome,"");
		menor[i].idade=-1;
	}
	
	for(;;){
		printf("\n\nDigite a opçao desejada: \n1-Insert \n2-Remove \n3-Imprimir \n4-Sair\n\n");
		scanf("%i",&opc);
		if(opc==1){
			inse();
		}else if(opc==2){
			remove();
		
		}else if(opc==3){
			printf("Fila");
			for(i=0;i<5;i++){
				
				if(menor[i].idade!=-1){
					printf(" \nNome: %s \t \t Idade: %i\n" , menor[i].nome,menor[i].idade);
					c++;
				}
			}
			for(i=0;i<5;i++){
				
				if(maior[i].idade!=-1){
					printf(" \nNome: %s \t \t Idade: %i\n" , maior[i].nome,maior[i].idade);
					c++;
				}
			}
				if(c==0){
					printf(" Vazia\n\n\n");
				}
				system("pause");
				c=0;
		}else if(opc==4){
			printf("\n\nFinalizando... \n\n");
			system("pause");			

			return 0;
		}else{
			printf("\n\nOpcao inesxistente\n\n");
		}
		Sleep(1000);
		system("cls");
	}
}


