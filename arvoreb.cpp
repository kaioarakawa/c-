#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>

struct no{
	int numero;
	struct no *esquerda;
	struct no *direita; 
	struct no *cima;
	//direita = próximo elemento e esquerda = elemento anteriror
};
void exibirPreOrdem(struct no **lista);
int po[9999];
int k=0;
int i=0;
int tamanho=0;
int profundidade=0;
int valor;
int type=0;

int main(){
	void inserir(struct no **lista);
	void remover(struct no **lista);
	struct no *lista, *pNavegar;
	int opc=0, valor, cont;
	lista = NULL;
	for(;;){
		if(profundidade<i){
			profundidade=i;
		}
		i=0;
		printf("Tamanho: %i\n",profundidade);
		printf("\n\nDigite a opçao desejada: \n1-Insert \n2-Remove \n3-Playlist \n4-Listar \n5-Sair\n\n");
		scanf("%i",&opc);
		
		if(opc==1){
			inserir(&lista);		
			tamanho++;
			printf("\nEfetuado com sucesso");
			Sleep(700);
		}else if(opc==2){
			pNavegar = lista;
			if(tamanho == 0){
				printf("Lista Vazia");
			}else{
				for(;;){
					
					printf("\n\n\nAtual: %d\n\n",pNavegar->numero);
					printf("\n\nDigite a opçao desejada: \n1-Anterior \n2-Proximo \n3-Ir para cima \n4-Remover numero \n5-Sair\n\n");
					scanf("%i",&opc);
						if(opc==1){
							if((pNavegar->esquerda)!=NULL){
								pNavegar = pNavegar->esquerda;
							}else{
								system("cls");
								printf("Ultima elemento da folha para a esquerda");
							}	
						}else if(opc==2){
							if((pNavegar->direita)!=NULL){
								pNavegar = pNavegar->direita;
							}else{
								system("cls");
								printf("Ultima elemento da folha para a direita");
							}
						}else if(opc==3){
							if((pNavegar->cima)==NULL){
								system("cls");
								printf("Elemento ja na raiz");
							}else{
								pNavegar = pNavegar->cima;
							}
					}else if(opc==4){
						remover(&pNavegar);
						if(type==1){
							lista=NULL;
						}
						printf("\nValor excluido com sucesso\n\n\n");
						tamanho--;
						if(tamanho==0){
							break;
						}
					}else if(opc==5){
							break;
					}
				}
				printf("\nEfetuado com sucesso");
				Sleep(1500);
			}
		}else if(opc==3){
			pNavegar = lista;
			if(tamanho==0){
				printf("Sem elementos na arvore");
			}else{
				for(;;){
						
						printf("\n\n\nAtual: %d\n\n",pNavegar->numero);
						printf("\n\nDigite a opçao desejada: \n1-Esquerda \n2-Direita \n3-Ir para cima \n4-Sair\n\n");
						scanf("%i",&opc);
							if(opc==1){
								if(pNavegar->esquerda!=NULL){
									pNavegar = pNavegar->esquerda;
								}else{
									system("cls");
									printf("Ultima elemento da folha para a esquerda");
								}	
							}else if(opc==2){
								if(pNavegar->direita!=NULL){
									pNavegar = pNavegar->direita;
								}else{
									system("cls");
									printf("Ultima elemento da folha para a direita");
								}
							}else if(opc==3){
								if(pNavegar->cima==NULL){
									system("cls");
									printf("Elemento ja na raiz");
								}else{
									pNavegar = pNavegar->cima;
								}
						}else if(opc==4){
								break;
						}
					}
				}
		}else if(opc==4){
			if(tamanho == 0){
				printf("Lista Vazia");
			}else{
				exibirPreOrdem(&lista);
				printf("\n\nArvore em pre-ordem\n\n");
				for(i=0;i<k;i++){
					printf("%i\t",po[i]);
				}
				printf("\n\n\n");
				system("pause");
			}
		}else if(opc==5){
			printf("\n\n\n\nFechando a playlist, muito obrigado");
			break;
		}else{
			printf("\n\n\n\n\nOpcao inexistente, tente novamente!!");
		}
		Sleep(400);
		system("cls");
		printf("\nProcessando.");
		Sleep(400);
		system("cls");
		printf("\nProcessando..");
		Sleep(400);
		system("cls");
		printf("\nProcessando...");
		Sleep(400);
		system("cls");
		
	}
	while(lista!=NULL) //liberando memória
	{
		pNavegar = lista;
		lista = lista->direita;
		free(pNavegar);
	}

}

void inserir(struct no **lista){

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
			p->direita=NULL;
			p->esquerda = NULL;
			p->cima = NULL;
			*lista=p;
		}
	}else{
		struct no *p, *pNavegar; //ponteiro de navegação
	
		printf("\n\nDigite o valor para se inserido apos o elemento\n");
		scanf("%d",&valor);
		
		pNavegar = *lista; //navegação recebe a lista
		while(pNavegar->cima!=NULL){
			pNavegar=pNavegar->cima;
		}
		
		
		if((p = (struct no * ) malloc(sizeof(struct no))) == NULL){
			printf("\nMemoria não alocada\n");
		}
		
		else{
			//para conter algum valor
			p->numero = valor; //recebe valor
			
			if(pNavegar->numero>p->numero){
				if(pNavegar->esquerda==NULL){
					
						vt=pNavegar;
						p->cima=vt;
						p->esquerda=NULL;
						p->direita=NULL;
						pNavegar->esquerda=p;
						i++;
						
				}else{
					while(p->numero<pNavegar->numero &&  pNavegar->esquerda!=NULL){
						pNavegar=pNavegar->esquerda;
						i++;
					}
					i++;
					if(pNavegar->numero<p->numero){
						while(p->numero>pNavegar->numero &&  pNavegar->direita!=NULL){
							pNavegar=pNavegar->direita;
							i++;
						}
						vt=pNavegar;
						p->cima=vt;
						p->esquerda=NULL;
						p->direita=NULL;
						pNavegar->direita=p;
						
					}else{
						vt=pNavegar;
						p->cima=vt;
						p->esquerda=NULL;
						p->direita=NULL;
						pNavegar->esquerda=p;

					}
				}
				
			}else if(pNavegar->numero<p->numero){
				//passagem até o ultimo valor que é maior
				if(pNavegar->direita==NULL){
						vt=pNavegar;
						p->cima=vt;
						p->esquerda=NULL;
						p->direita=NULL;
						pNavegar->direita=p;
						i++;
						
				}else{
					while(pNavegar->numero<p->numero && pNavegar->direita!=NULL){
						pNavegar=pNavegar->direita;
						i++;
					}
					i++;
					if(pNavegar->numero<p->numero){
						vt=pNavegar;
						p->cima=vt;
						p->esquerda=NULL;
						p->direita=NULL;
						pNavegar->direita=p;
						
						
					}else{
						while(p->numero<pNavegar->numero &&  pNavegar->esquerda!=NULL){
							pNavegar=pNavegar->esquerda;
							i++;
						}
						vt=pNavegar;
						p->cima=vt;
						p->esquerda=NULL;
						p->direita=NULL;
						pNavegar->esquerda=p;
					}
				}

			
			}
			
			
			*lista=pNavegar;
			
		}
	}
}

void remover(struct no **lista){
	void semfilho(struct no **lista);
	void filhoesquerda(struct no **lista);
	void filhodireita(struct no **lista);
	void doisfilhos(struct no **lista);
	struct no *pNavegar;
	pNavegar=*lista;
	
	if(pNavegar->direita==NULL && pNavegar->esquerda==NULL){//delete sem filho
		semfilho(lista);
	}else if(pNavegar->direita==NULL && pNavegar->esquerda!=NULL ){//delete com um filho a esquerda 
		filhoesquerda(lista);
	}else if(pNavegar->direita!=NULL && pNavegar->esquerda==NULL){//delete  com um filho a direita
		filhodireita(lista);
	}else if(pNavegar->direita!=NULL && pNavegar->esquerda!=NULL){
		doisfilhos(lista);		
	}
	
	*lista=pNavegar;
	
	}

void semfilho(struct no **lista){
	
	struct no *pNavegar;
	pNavegar=*lista;
	
	if(pNavegar->cima!=NULL){
		pNavegar=pNavegar->cima;
		pNavegar->direita=NULL;
		pNavegar->esquerda=NULL;
			
	}else{
		type=1;
	}
	
	*lista=pNavegar;
	
	
}

void filhoesquerda(struct no **lista){
	void remover(struct no **lista);
	struct no *pNavegar;
	pNavegar=*lista;
	int aux=0;
	
	pNavegar=pNavegar->esquerda;
	aux=pNavegar->numero;
	pNavegar=pNavegar->cima;
	pNavegar->numero=aux;
	pNavegar=pNavegar->esquerda;
	
	*lista=pNavegar;
	remover(lista);
}

void filhodireita(struct no **lista){
	void remover(struct no **lista);
	struct no *pNavegar;
	pNavegar=*lista;
	int aux=0;
	
	pNavegar=pNavegar->direita;
	aux=pNavegar->numero;
	pNavegar=pNavegar->cima;
	pNavegar->numero=aux;
	pNavegar=pNavegar->direita;
	
	
	*lista=pNavegar;
	remover(lista);
}

void doisfilhos(struct no **lista){
	void remover(struct no **lista);
		struct no *pNavegar;
	struct no *raiz;
	struct no *dois;
	pNavegar=*lista;
	raiz=*lista;
	dois=*lista;
	int aux;
	while(raiz->cima!=NULL){
			raiz=raiz->cima;
	}
		
	if(pNavegar->numero<raiz->numero){
		dois=dois->esquerda;
		//pegar maior valor
		while(dois->direita!=NULL){
			dois=dois->direita;
		}
		//troca dos valores 
		pNavegar->numero=dois->numero;
		pNavegar=pNavegar->esquerda;
		//passagem ao valor
		while(pNavegar->direita!=NULL){
			pNavegar=pNavegar->direita;
		}
	}else{
		dois=dois->direita;
		//pegar maior valor
		while(dois->esquerda!=NULL){
			dois=dois->esquerda;
		}
		//troca dos valores 
		pNavegar->numero=dois->numero;
		pNavegar=pNavegar->direita;
		//passagem ao valor
		while(pNavegar->esquerda!=NULL){
			pNavegar=pNavegar->esquerda;
		}
	}
	
	
	*lista=pNavegar;
	remover(lista);
	
}

void exibirPreOrdem(struct no **lista){
	struct no *pNavegar;
	pNavegar=*lista;
    if(pNavegar != NULL){
    	po[k]=pNavegar->numero;
    	k++;
        exibirPreOrdem(&pNavegar->esquerda);
        exibirPreOrdem(&pNavegar->direita);
    }
}


