#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int b=0;
int vet[5];
int i = 0;

void push() {
	if (i > 4) {
		printf_s("Pilha cheia");
	}else{
	printf_s("\n\n\nDigite o numero para ser empilhado\n");
	scanf_s("%i", &vet[i]);


	i++;
	printf_s("\n\nPUSH");
	}
}


void pop() {
	if (i == 0) {
		printf_s("Pilha vazia");
	}else{
	i--;
	printf_s("POP no %i", vet[i]);
	vet[i] = NULL;
	
	printf_s("\n\nPOP");
	}
}



int main() {
	int a;
	int cont=0;
	for (b = 0;b < 5;b++) {
		vet[b] = NULL;
	}

	while (1) {
		printf("\n Digite a opção desejada: \n");
		printf("\n1-Push(Empilhar)");
		printf("\n2-Pop(Desempilhar)");
		printf("\n3-Mostrar pilha");
		printf("\n4-Sair\n");
		scanf_s("%i", &a);



		if (a == 1) {
			push();
		}
		else if (a == 2) {
			pop();
		}
		else if (a == 3) {
			for (b = 0;b < 5;b++) {
				if (vet[b] != 0) {
					printf_s("\n\n%i \t", vet[b]);
					cont++;
				}
			}
			if (cont == 0) {
				printf_s("A pilha esta vazia");
			}
			cont = 0;
		}
		else if (a == 4) {
			break;
			system("pause");
			return(0);

		}
		else {
			printf("\nOpção inexsistente");
		}
		Sleep(2000);
		system("cls");
		
	}
	
}