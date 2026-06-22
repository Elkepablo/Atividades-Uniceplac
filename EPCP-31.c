//EPCP-31
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 31 - Contagem regressiva*");
	printf("\n*********************************************************");
	
	int i;
	
	for (i=10; i>=1; i--){
		printf("%d\n", i);
	}
return 0;
}
