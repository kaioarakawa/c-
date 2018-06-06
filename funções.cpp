#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
int a;
int b=0;
int c=0;
void semretorno (){
	printf("VOID");
}

int comretorno(){
	a=1;
	
	return a;
}

main(){
	setlocale(LC_ALL,"Portuguese");
	void semretorno();
	
	int comretorno();
	
	for(;;){
	printf("Opção: \n");
	scanf("%i",&b);
	
	
		
		if(b==1){
			semretorno();
		}else if(b==2){
			
			printf("%i",comretorno());
		}else if(b==3){
			break;
		}
			printf("\n");
	}
	
}
