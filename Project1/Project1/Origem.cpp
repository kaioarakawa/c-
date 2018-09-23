#include <stdio.h>
#include <stdlib.h>

int main() {
	int tamanho, i;

	printf("\n programar para testar o malloc");
	printf("\n digite o tamanho do vetor");
	scanf_s("%d", &tamanho);
	fflush(stdin);

	int *vetor;
	vetor = (int *)malloc(tamanho * sizeof(int));

	for (i = 0; i<tamanho; i++) {
		vetor[i] = i;
	}

	printf("\n\n\n\n\n");
	printf("------------------------------\n");
	for (i = 0; i<tamanho; i++) {
		printf("%d \t", vetor[i]);
	}
	printf("\n\n\n\n\n");
	printf("------------------------------\n");
	free(vetor);//limpa
	system("pause");
}
