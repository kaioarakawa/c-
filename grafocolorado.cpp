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
int menor=9999;
int maior=0;
int dimi=0;
int aume=0;
int vet[8];
char cores[10]={'v','a','r','p','c','l','b','d','k','m'};
int color(int local);
main(){
	int local;
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
	
	
	for(i=0;i<8;i++){
		for(j<0;j<8;j++){
			if(adj[i][j]==1){
				flag++;
			}
		}
		if(flag<=menor){
			local=i;
		}
		flag=0;
	}
	
	local=0;
	while(local<=7){
		color(local);
		local++;
	}
	printf("%i",maior+1);	
}

int color(int local){
	if(g[local].cor!=NULL){
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
