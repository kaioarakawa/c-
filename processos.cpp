#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

struct processos{
	int id;
	int time;
	int filafinal;
};

struct processos p[3];
int i;
int j=0;


main(){

	for(i=1; i<=4;i++){
		p[i].id=i;
		p[i].time=(rand()%29)+1;
	}
	i--;
	for(;;){
		
		if(i==0){
			break;
		}else{
			printf("\nProcessos em espera %i\n",(i-1) );	
		}
		
		
		if(p[i].filafinal==0){
			printf("\nFila 1 --- Tempo de 5 segundos---Rodando processo de id %i\n",p[i].id);
			printf("\nFila 2 --- Tempo de 10 segundos---Rodando processo de id 0\n");
			printf("\nFila 3 --- Tempo de 15 segundos---Rodando processo de id 0\n");
			Sleep(5000);
			p[i].time=p[i].time-5;
			p[i].filafinal=1;
			j=1;
		}else if(p[i].filafinal==1 && p[i].time>0){
			printf("\nFila 1 --- Tempo de 5 segundos---Rodando processo de id 0\n");
			printf("\nFila 2 --- Tempo de 10 segundos---Rodando processo de id %i\n",p[i].id);
			printf("\nFila 3 --- Tempo de 15 segundos---Rodando processo de id 0\n");
			Sleep(10000);
			p[i].time=p[i].time-10;
			p[i].filafinal=2;
			j=1;
		}else if(p[i].filafinal==2 && p[i].time>0){
			printf("\nFila 1 --- Tempo de 5 segundos---Rodando processo de id 0\n");
			printf("\nFila 2 --- Tempo de 10 segundos---Rodando processo de id 0\n");
			printf("\nFila 3 --- Tempo de 15 segundos---Rodando processo de id %i\n",p[i].id);
			Sleep(15000);
			p[i].time=p[i].time-15;
			p[i].filafinal=3;
			j=1;
		}
		
		system("cls");
		if(j==0){
			i--;
		}
		j=0;
	}
	
	printf("Processos finalizados -----> 4\n");
	printf("Processo de id 1 foi finalizado na fila %i\n",p[1].filafinal);
	printf("Processo de id 2 foi finalizado na fila %i\n",p[2].filafinal);
	printf("Processo de id 3 foi finalizado na fila %i\n",p[3].filafinal);
	printf("Processo de id 4 foi finalizado na fila %i\n",p[4].filafinal);
	
	
}

