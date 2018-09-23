#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>

struct no{
	int numero;
	int dese;
	struct no *esquerda;
	struct no *direita; 
	struct no *cima;
	
	//direita = pr�ximo elemento e esquerda = elemento anteriror
};
void CalculoDoDesequilibrioEsquerda(struct no **lista);
void CalculoDoDesequilibrioDireita(struct no **lista);
void UltimoEsquerda(struct no **lista, int op);
void UltimoDireita(struct no **lista, int op);
void exibirPreOrdem(struct no **lista);
int profundidade (struct no **lista);
void EmOrdem(struct no **lista);
void PosOrdem(struct no **lista);
int po[9999];
int k=0;
int i=0;
int tamanho=0;
int profun=0;
int valor;
int type=0;
struct no *lista= NULL, *pNavegar;

int main(){
	void inserir(struct no **lista);
	void remover(struct no **lista);
	int opc=0, valor, cont;
	for(;;){
		
		if(tamanho!=0){
			while(lista->cima!=NULL){
				lista=lista->cima;
			}
			if(lista->direita!=NULL && lista->direita->dese==NULL){
				lista=lista->direita;
				CalculoDoDesequilibrioDireita(&lista);
			}else if(lista->esquerda!=NULL && lista->esquerda->dese==NULL){
				lista=lista->esquerda;
				CalculoDoDesequilibrioEsquerda(&lista);
			}
			if(lista->direita!=NULL && lista->esquerda!=NULL){
				if(lista->direita->dese==101 && lista->esquerda->dese==101){
					lista->dese=101;
				}else{
					lista->dese=lista->direita->dese-lista->esquerda->dese;
				}
			}
		}

			
		
		
		printf("\n\nDigite a op�ao desejada: \n1-Insert \n2-Remove \n3-Playlist  \n4-Listar em pre ordem \n5-Listar em ordem \n6-Listar pos ordem  \n7-Profundidade  \n8-Sair\n\n");
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
					if(pNavegar->dese=!NULL){
						printf("\nDesequilibrio: %d\n\n",pNavegar->dese);
					}
					printf("\n\nDigite a op�ao desejada: \n1-Anterior \n2-Proximo \n3-Ir para cima \n4-Remover numero \n5-Sair\n\n");
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
						printf("\nDesequilibrio: %d\n\n",pNavegar->dese);
						printf("\n\nDigite a op�ao desejada: \n1-Esquerda \n2-Direita \n3-Ir para cima \n4-Sair\n\n");
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
				while(lista->cima!=NULL){
					lista=lista->cima;
				}
				exibirPreOrdem(&lista);
				printf("\n\nArvore em pre-ordem\n\n");
				for(i=0;i<k;i++){
					printf("%i\t",po[i]);
				}
				k=0;
				printf("\n\n\n");
				system("pause");
			}
		}else if(opc==5){
			if(tamanho == 0){
				printf("Lista Vazia");
			}else{
				while(lista->cima!=NULL){
					lista=lista->cima;
				}
				printf("\n\nArvore em ordem\n\n");
				EmOrdem(&lista);
				printf("\n\n\n");
				system("pause");
			}
		}else if(opc==6){
			if(tamanho == 0){
				printf("Lista Vazia");
			}else{
				while(lista->cima!=NULL){
					lista=lista->cima;
				}
				printf("\n\nArvore em pos ordem\n\n");
				PosOrdem(&lista);
				printf("\n\n\n");
				system("pause");
			}
		}else if(opc==7){
			if(tamanho==0){
				printf("Lista Vazia");
			}else{
				while(lista->cima!=NULL){
					lista=lista->cima;
				}
				profun=profundidade(&lista);
				printf("Tamanho: %i\n",(profun-1));
				system("pause");
			}

		}else if(opc==8){
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
	while(lista!=NULL) //liberando mem�ria
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
			printf("\nMemoria n�o alocada");
		}else{
			
			p->numero = valor;
			p->direita=NULL;
			p->esquerda = NULL;
			p->cima = NULL;
			p->dese = NULL;
			*lista=p;
		}
	}else{
		struct no *p, *pNavegar; //ponteiro de navega��o
	
		printf("\n\nDigite o valor para se inserido apos o elemento\n");
		scanf("%d",&valor);
		
		pNavegar = *lista; //navega��o recebe a lista
		while(pNavegar->cima!=NULL){
			pNavegar=pNavegar->cima;
		}
		
		
		if((p = (struct no * ) malloc(sizeof(struct no))) == NULL){
			printf("\nMemoria n�o alocada\n");
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
						pNavegar->dese = NULL;
						
				}else{
					while(p->numero<pNavegar->numero &&  pNavegar->esquerda!=NULL){
						pNavegar=pNavegar->esquerda;
					}
					i++;
					if(pNavegar->numero<p->numero){
						while(p->numero>pNavegar->numero &&  pNavegar->direita!=NULL){
							pNavegar=pNavegar->direita;
						}
						if(pNavegar->numero<p->numero){
							vt=pNavegar;
							p->cima=vt;
							p->esquerda=NULL;
							p->direita=NULL;
							pNavegar->direita=p;
							pNavegar->dese = NULL;	
						}else{
							vt=pNavegar;
							p->cima=vt;
							p->esquerda=NULL;
							p->direita=NULL;
							pNavegar->esquerda=p;
							pNavegar->dese = NULL;
						}
					}else{
						vt=pNavegar;
						p->cima=vt;
						p->esquerda=NULL;
						p->direita=NULL;
						pNavegar->esquerda=p;
						pNavegar->dese = NULL;
					}
				}
				
			}else if(pNavegar->numero<p->numero){
				//passagem at� o ultimo valor que � maior
				if(pNavegar->direita==NULL){
						vt=pNavegar;
						p->cima=vt;
						p->esquerda=NULL;
						p->direita=NULL;
						pNavegar->direita=p;
						pNavegar->dese = NULL;
				}else{
					while(pNavegar->numero<p->numero && pNavegar->direita!=NULL){
						pNavegar=pNavegar->direita;
					}
					i++;
					if(pNavegar->numero<p->numero){
						vt=pNavegar;
						p->cima=vt;
						p->esquerda=NULL;
						p->direita=NULL;
						pNavegar->direita=p;
						pNavegar->dese = NULL;
						
					}else{
						while(p->numero<pNavegar->numero &&  pNavegar->esquerda!=NULL){
							pNavegar=pNavegar->esquerda;
						}
						if(pNavegar->numero<p->numero){
							vt=pNavegar;
							p->cima=vt;
							p->esquerda=NULL;
							p->direita=NULL;
							pNavegar->direita=p;
							pNavegar->dese = NULL;
						}else{
							vt=pNavegar;
							p->cima=vt;
							p->esquerda=NULL;
							p->direita=NULL;
							pNavegar->esquerda=p;
							pNavegar->dese = NULL;	
						}
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

int profundidade (struct no **lista) {
	struct no *pNavegar;
	pNavegar=*lista;
	int profune;
	int profund;
   if (pNavegar == NULL) 
      return 0;
   else {
    	profune = profundidade (&pNavegar->esquerda);
      	profund = profundidade (&pNavegar->direita);
	    if (profune < profund){
	    	return profund + 1;
		} 
	    else{
	    	return profune + 1;
		} 
   }
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

void EmOrdem(struct no **lista){
	struct no *pNavegar;
	pNavegar=*lista;
    if(pNavegar != NULL){
        EmOrdem(&pNavegar->esquerda);
        printf("\n%i", pNavegar->numero);
        EmOrdem(&pNavegar->direita);
    }
}

void PosOrdem(struct no **lista){
	struct no *pNavegar;
	pNavegar=*lista;
    if(pNavegar != NULL){
        PosOrdem(&pNavegar->esquerda);
        PosOrdem(&pNavegar->direita);
        printf("\n%i", pNavegar->numero);
    }
}

void CalculoDoDesequilibrioEsquerda(struct no **lista){
	struct no *pNavegar;
	pNavegar=*lista;
	int dir;
	int esquer;
	if(pNavegar->cima==NULL && (pNavegar->esquerda->dese!=NULL || pNavegar->direita->dese!=NULL)){
		main();
	}else if(pNavegar->direita!=NULL && pNavegar->direita->dese==NULL){
		*lista=pNavegar;
		
		UltimoDireita(lista,1);
			
	}else if(pNavegar->esquerda!=NULL && pNavegar->esquerda->dese==NULL ){
		*lista=pNavegar;
		UltimoEsquerda(lista,1);	
	}else{
		// 101 � igual a 0 no programa

		if(pNavegar->esquerda==NULL && pNavegar->direita==NULL && pNavegar->dese==NULL){
			pNavegar->dese=101;
		}else if(pNavegar->esquerda!=NULL && pNavegar->direita!=NULL && pNavegar->dese==NULL){
			if(pNavegar->direita->dese==101){
				dir=1;
			}else{
				dir=pNavegar->direita->dese+1;
			}
			if(pNavegar->esquerda->dese==101){
				esquer=-1;	
			}else{
				esquer=pNavegar->esquerda->dese-1;
			}
			if(dir-esquer==0){
				pNavegar->dese=101;	
			}else{
				pNavegar->dese=dir-esquer;	
			}
			
		}else if(pNavegar->esquerda!=NULL && pNavegar->direita==NULL && pNavegar->dese==NULL){
			if(pNavegar->esquerda->dese==101){
				esquer=-1;	
			}else{
				esquer=pNavegar->esquerda->dese-1;
			}
			printf("%i",esquer);
			pNavegar->dese=esquer;
		}else if(pNavegar->esquerda==NULL && pNavegar->direita!=NULL && pNavegar->dese==NULL){
			if(pNavegar->direita->dese==101){
				dir=1;
			}else{
				dir=pNavegar->direita->dese+1;
			}
			pNavegar->dese=dir;
		}
		pNavegar=pNavegar->cima;
		*lista=pNavegar;	
		CalculoDoDesequilibrioEsquerda(lista);
		

	}
		
}

void CalculoDoDesequilibrioDireita(struct no **lista){
	struct no *pNavegar;
	pNavegar=*lista;
	int dir;
	int esquer;
	if(pNavegar->cima==NULL && pNavegar->direita->dese!=NULL ){
		main();
	}else if(pNavegar->direita!=NULL && pNavegar->direita->dese==NULL ){
		*lista=pNavegar;
		UltimoDireita(lista,2);	
	}else if(pNavegar->esquerda!=NULL && pNavegar->esquerda->dese==NULL ){
		*lista=pNavegar;
		UltimoEsquerda(lista,2);	
	}else{
		// 101 � igual a 0 no programa

		if(pNavegar->esquerda==NULL && pNavegar->direita==NULL && pNavegar->dese==NULL){
			pNavegar->dese=101;
		}else if(pNavegar->esquerda!=NULL && pNavegar->direita!=NULL && pNavegar->dese==NULL){
			if(pNavegar->direita->dese==101){
				dir=1;
			}else{
				dir=pNavegar->direita->dese+1;
			}
			if(pNavegar->esquerda->dese==101){
				esquer=-1;	
			}else{
				esquer=pNavegar->esquerda->dese-1;
			}
			if(dir-esquer==0){
				pNavegar->dese=101;	
			}else{
				pNavegar->dese=dir-esquer;	
			}
			
		}else if(pNavegar->esquerda!=NULL && pNavegar->direita==NULL && pNavegar->dese==NULL){
			if(pNavegar->esquerda->dese==101){
				esquer=-1;	
			}else{
				esquer=pNavegar->esquerda->dese-1;
			}
			printf("%i",esquer);
			pNavegar->dese=esquer;
		}else if(pNavegar->esquerda==NULL && pNavegar->direita!=NULL && pNavegar->dese==NULL){
			if(pNavegar->direita->dese==101){
				dir=1;
			}else{
				dir=pNavegar->direita->dese+1;
			}
			pNavegar->dese=dir;
		}
		pNavegar=pNavegar->cima;
		*lista=pNavegar;	
		CalculoDoDesequilibrioDireita(lista);
		

	}
		
}

void UltimoDireita(struct no **lista, int op){
	struct no *pNavegar;
	pNavegar=*lista;
	while(pNavegar->direita!=NULL && pNavegar->dese==NULL){
		pNavegar=pNavegar->direita;
	}
	*lista=pNavegar;
	if(op==1){
		CalculoDoDesequilibrioEsquerda(lista);
	}else{
		CalculoDoDesequilibrioDireita(lista);
	}	
	
}

void UltimoEsquerda(struct no **lista, int op){
	struct no *pNavegar;
	pNavegar=*lista;

	while(pNavegar->esquerda!=NULL && pNavegar->dese==NULL){
		pNavegar=pNavegar->esquerda;
	}
	
	*lista=pNavegar;

	
	if(op==1){
		CalculoDoDesequilibrioEsquerda(lista);
	}else{
		CalculoDoDesequilibrioDireita(lista);
	}		
}



