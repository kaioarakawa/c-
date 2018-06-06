#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>


main(){
	int vet1[10];
	int vet2[10];
	int vet3[20];
	int i;
	int cont=0;
	int cont1=0;
	for(i=0;i<10;i++){
		printf("Digite o valor para a posição %i do primeiro vetor\n",(i+1));
		scanf("%i",&vet1[i]);
	}
	
	for(i=0;i<10;i++){
		printf("Digite o valor para a posição %i do segundo vetor\n",(i+1));
		scanf("%i",&vet2[i]);
	}
	
	
	for(i=0;i<20;i++){
		if(i%2==0){
			vet3[i]=vet1[cont];
			cont++;	
		}else if(i%2==1){
			vet3[i]=vet2[cont1];
			cont1++;	
		}
		
	}
	
	
	for(i=0;i<20;i++){
		printf("%i \t",vet3[i]);		
	}
	
}
