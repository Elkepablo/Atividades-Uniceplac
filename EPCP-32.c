//EPCP-32
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 32 - Quadrado dos números de 1 a 10*");
	printf("\n*********************************************************");
	
	int i;
	
	for(i=1; i<=10; i++){
		printf("%d ao quadrado = %d\n", i, i*i);
	}
	return 0;
}
