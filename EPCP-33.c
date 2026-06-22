//EPCP-33
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 33 - Múltiplos de 3 entre 1 e 30*");
	printf("\n*********************************************************");
	
	
	int i;
	
	for(i=1; i<=30; i++){
		if(i % 3 == 0){
			printf("%d\n", i);
		}
	}
	return 0;
}
