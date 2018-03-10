#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <stddef.h>

int fila[5];
int insert=0;
int remov=0;
int i;
int cont=0;


void inse() {

	for(i=0;i<5;i++){
		if(fila[i]!=0){
			cont++;
		}
	}
	if (cont>4 ) {
		printf("fila cheia\n\n");
	}else{
			if(insert==5){
			
				insert=0;
			
			}
			
			a:
	printf("\n\n\nDigite o numero para ser colocado na fila\n\n");
	scanf("%i", &fila[insert]);
		if(fila[insert]==0){
			printf("Nao pode ser colocado o numero zero, Por favor escolha outro numero");
			goto a;
		}


	insert++;
	printf("\n\n Insert\n\n");
	}
	cont=0;
}


void remove() {
	for(i=0;i<5;i++){
		if(fila[i]==0){
			cont++;
		}
	}
	if (cont>4) {
		printf("Fila vazia\n\n");
	}else{
		if(remov==5){
			remov=0;
		}
		
		printf("\n\nRemove %i\n\n", fila[remov]);
		fila[remov] = 0;
		remov++;
	
		printf("\nRemove\n\n");
	}
	cont=0;
}





int main(){
int opc;
int c;


	for(i=0;i<5;i++){
		fila[i]=0;

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
				
				if(fila[i]!=0){
					printf(" \n %i" , fila[i]);
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
						

			return 0;
		}else{
			printf("\n\nOpcao inesxistente\n\n");
		}
		Sleep(1000);
		system("cls");
	}
}

