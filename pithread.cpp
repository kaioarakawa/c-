#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <pthread.h>
#include <semaphore.h>
double sum=0;
int i;
sem_t mutex;
void *funcao(void *param ){
	
	sem_wait (&mutex);
	for (int n = 0; n <= i; n++)
	{
		sum = sum + pow(-1, (double)n) / (2 * n + 1);
	}
	Sleep(50);
	printf("%d : %lf\n", i, sum * 4);
	sem_post (&mutex);
	pthread_exit(NULL);
}

	
int main(void){
	
	printf("------------------------- \n");
	pthread_t threads[1];
	sem_init(&mutex, 0,1);
	
	
	for (i = 1; i <= 100; i++){
		sum =0;
		pthread_create(&threads[0], NULL, funcao, (void *)0); //criando as threads
		
		pthread_join(threads[0], NULL); //esperando o fim das threads
	}
	printf("------------------------- \n");
	return(0);
}
