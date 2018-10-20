#include <stdio.h>
#include <stdlib.h>

struct grafos{
	int id;
	char cor;
};

struct grafos g[8];
int i=0;
int j;
int flag=0;
int adj[8][8];
int q=0;
int q2=0;
int qtn[9999];
int maior=0;
int vet[8];
char cores[10]={'v','a','r','p','c','l','b','d','k','m'};
int chama();
int color(int local);
int verifica(int num);
int profundidade(int local);
main(){
	int local;
	int op;
	for(i=0;i<8;i++){
		g[i].id=i;
		g[i].cor=NULL;
		for(;;){
			printf("O grafo de numero %i tem ligação com quais outros grafos?-->  -1 para finalizar\n",i);
			scanf("%i",&flag);
			
			if(flag==-1){
				break;
			}else{
				adj[i][flag]=1;
				adj[flag][i]=1;
			}	
		}
			
	}
	
//	feito para testes rapidos

//	for(i=0;i<8;i++){
//		g[i].id=i;
//		g[i].cor=NULL;
//		for(j=0;j<8;j++){
//			if(i!=j){
//				adj[i][j]=1;	
//			}
//			
//		}
//	}
//	
	
//	for(i=0;i<8;i++){
//		for(j<0;j<8;j++){
//			if(adj[i][j]==1){
//				flag++;
//			}
//		}
//		if(flag<=menor){
//			local=i;
//		}
//		flag=0;
//	}

//	fim de testes rapidos
	system("cls");
	
	for(;;){
		printf("\n\n\nDigite a opcao desejada\n");
		printf("1 - Colorar Grafo\n");
		printf("2 - Busca em Profundidade\n");
		printf("3 - Sair\n");
		scanf("%i", &op);
		
		if(op==3){
			break;
		}else if(op==1){
			local=0;
			while(local<=7){
				color(local);
				local++;
			}
			printf("Foram necessarios %i cores para o grafo",maior+1);
		}else if(op==2){
			printf("Digite o numero para fazer a busca em profundidade\n");
			scanf("%i",&local);
			
			vet[0]=local;
			j=0;
			profundidade(vet[j]);	
				
			
			printf("Vetor demostrando o caminho feito para a chegada ate o elemento %i\n", local);
			
			for(i=0;i<8;i++){
				printf("%i\t",vet[i]);
			}
			
		}else{
			printf("Opcao inexistente");
		}
	}
	
	
	
}

int color(int local){
	if(g[local].cor!=NULL){
		return 0;
	}else{	
		i=0;
		g[local].cor=cores[0];
		flag=0;
		for(j=0; j<8;j++){
			
			if(adj[local][j]==1 && local!=j){
				vet[i]=j;
				i++;
			}
		}
		for(j=0;j<i;j++){
			if(g[local].cor==g[(vet[j])].cor){
				flag++;
				g[local].cor=cores[flag];
				
			}
		}
		if(flag>maior){
			maior=flag;
		}
	}
	return 0;
}

int profundidade(int local){
		printf("%i",local);
		system("pause");
		
	for(i=0;i<8;i++){
		if(adj[local][i]==1){

			if(verifica(i)==0){
				j++;
				vet[j]=i;
				if(j==7){
					vet[8]=-1;
					return 0;
				}else{
					q++;
					qtn[q]=i;
				}
			}
		}
	}

	chama();
	
}

int chama(){
		q2++;
		profundidade(qtn[q2-1]);
}



int verifica(int num){
	for(flag=0;flag<8;flag++){
		if(vet[flag]==num){
			return 1;
		}
	}
	
	return 0;
}
