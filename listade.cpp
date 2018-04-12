#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct no
{
	int numero;
	struct no *esquerda;
	struct no *direita; 
	//direita = próximo elemento e esquerda = elemento anteriror
};
int tamanho;

int main(){
	void inserir(struct no **lista,int valor, int igual);
	void remover(struct no **lista,int valor, int igual);
	void imprimir(struct no *lista);
	struct no *lista, *pNavegar;
	int opc=0, valor, cont;
	lista = NULL;
	for(;;){
		printf("\n\nDigite a opçao desejada: \n1-Insert \n2-Remove \n3-Imprimir \n4-Sair\n\n");
		scanf("%i",&opc);
		
		if(opc==1){
				if(lista == NULL){
					inserir(&lista,valor,NULL);
					tamanho++;
					system("cls");
					
				}else{
					pNavegar = lista;
					for(;;){
						printf("Atual: %d\n\n",pNavegar->numero);
						printf("\n\nDigite a opçao desejada: \n1-Anterior \n2-Proximo \n3-Inserir depois \n4-Sair\n\n");
						scanf("%i",&opc);
						if(opc==1){
							pNavegar = pNavegar->esquerda;
							system("cls");
							
						}else if(opc==2){
							pNavegar = pNavegar->direita;
							system("cls");
							
						}else if(opc==3){

							inserir(&lista,valor,pNavegar->numero);
							tamanho++;
							system("cls");
							
						}else if(opc==4){
							printf("Saindo do print");
							break;
						}else{
							system("cls");
							printf("\n\n\n\nOpcao inexistente, tente novamente!!\n\n");
						}
		
						
					}
				}
		}else if(opc==2){
			system("cls");
			if(lista == NULL){
				printf("Lista Vazia");
				tamanho++;	
			}else{
				pNavegar = lista;
				for(;;){
					printf("\n\n\nAtual: %d\n\n",pNavegar->numero);
					printf("\n\nDigite a opçao desejada: \n1-Anterior \n2-Proximo \n3-Remover numero \n4-Sair\n\n");
					scanf("%i",&opc);
					if(opc==1){
						pNavegar = pNavegar->esquerda;
						system("cls");	
					}else if(opc==2){
						pNavegar = pNavegar->direita;
						system("cls");
					}else if(opc==3){
						remover(&lista,valor,pNavegar->numero);
						tamanho--;
						printf("\nValor excluido com sucesso\n\n\n");
						system("pause");
						pNavegar = pNavegar->esquerda;
						system("cls");
						if(tamanho==0){
							printf("Saindo do print");
							system("pause");
							break;
							
						}
					}else if(opc==4){
						printf("Saindo do print");
						system("pause");
						break;
						
					}else{
						system("cls");
						printf("\n\n\n\n\nOpcao inexistente, tente novamente!!");
					}
		
				}
			}
		}else if(opc==3){
			imprimir(lista);
			system("pause");
			system("cls");
		}else if(opc==4){
			printf("\n\n\n\nFechando a playlist, muito obrigado\n\n\n\n");
			system("pause");
			break;
			
		}else{
			printf("\n\n\n\n\nOpcao inexistente, tente novamente!!");
		}
		
	}
		while(lista!=NULL) //liberando memória
	{
		pNavegar = lista;
		lista = lista->direita;
		free(pNavegar);
	}

}



	

void inserir(struct no **lista,int valor, int igual){
	
	struct no *vt;
	if(*lista == NULL)//lista vazia
	{
	struct no *p;
	printf("\n\nDigite o valor para ser colocado na lista\n");
	scanf("%d",&valor);
		if((p =(struct no * ) malloc(sizeof(struct no))) == NULL)//erro
		{
			printf("\nMemoria não alocada");
		}else{
			
			p->numero = valor;
			vt=p;
			p->direita=vt;
			p->esquerda = vt;
			*lista=p;
		}
	}else{
		struct no *p, *pNavegar, *pn, *prime; //ponteiro de navegação
	
		printf("\n\nDigite o valor para se inserido apos o elemento\n");
		scanf("%d",&valor);
		
		pNavegar = *lista; //navegação recebe a lista
		
		if((p = (struct no * ) malloc(sizeof(struct no))) == NULL){
			printf("\nMemoria não alocada\n");
		}
		
		else{
			//para conter algum valor
			p->numero = valor; //recebe valor
			pn=p;
			prime=pNavegar;			
			while((pNavegar->numero) != igual ){
				pNavegar = pNavegar->direita;
			}
			
			if(tamanho==1){
				p->esquerda=pNavegar;
				p->direita=prime;
				prime->esquerda=pn;
				prime->direita=pn;
				
				
			}else if((pNavegar=pNavegar->direita)==prime && tamanho>1){
				pNavegar=pNavegar->esquerda;
				p->esquerda=pNavegar;
				p->direita=prime;
				prime->esquerda=pn;
				pNavegar->direita=pn;
			
			}else{
				pNavegar = pNavegar->esquerda;
				p->esquerda=pNavegar;
				pNavegar = pNavegar->direita;
				p->direita=pNavegar;
				
				
				pNavegar->esquerda=pn;
				pNavegar = pNavegar->esquerda;
				pNavegar = pNavegar->esquerda;

				pNavegar->direita=pn;
			}
			
			
			*lista=pNavegar;
			
		}
	
	}
	printf("\nValor inserido com sucesso\n\n\n");
	system("pause");
}
void remover(struct no **lista,int valor, int igual){
		struct no *vt;
		struct no *p, *pNavegar, *pn, *prime; //ponteiro de navegação
		
		pNavegar = *lista; //navegação recebe a lista
		
			prime=pNavegar;			
			while((pNavegar->numero) != igual ){
				pNavegar = pNavegar->direita;
			}
			
			if(tamanho==1){
				pNavegar->esquerda=NULL;
				pNavegar->direita=NULL;
				pNavegar->numero=NULL;
				
				
			}else if((pNavegar=pNavegar->direita)==prime && tamanho>1){
				pNavegar=pNavegar->esquerda;
				pNavegar=pNavegar->esquerda;
				vt=pNavegar;
				pNavegar->direita=prime;
				pNavegar=pNavegar->direita;
				pNavegar->esquerda=vt;
			}else{
				vt=pNavegar;
				pNavegar = pNavegar->esquerda;
				pNavegar = pNavegar->esquerda;
				pNavegar->direita=vt;
				vt=pNavegar;
				pNavegar = pNavegar->direita;
				pNavegar->esquerda=vt;
				
			}
			
			
			*lista=pNavegar;
			
			
}

void imprimir(struct no *lista){
	struct no *p;
	p = lista;	
	if(p == NULL) //lista nula, lista vazia
	{
		printf("\n\n\nLista Vazia\n");
	}
	else
	{
		for(int i=0;i<tamanho;i++) //enquanto a lista não for nula
		{
			printf("\nElemento: %d\n",p->numero); //imprime o elemento
			p = p->direita; //passa para o próximo regitro
		}
	}	
}
	

