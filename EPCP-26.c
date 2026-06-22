//EPCP-26.c
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale (LC_ALL, "");
	
	printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 26 -  Contar de 1 a 10*");
	printf("\n*********************************************************");
	
	int i;
	
	for(i=0; i<=10; i++){
		printf("%d\n", i);
	}
	return 0;
	}
