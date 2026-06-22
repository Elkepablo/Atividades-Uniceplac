//EPCP-36
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 36 -  Contar até 10 com while*");
	printf("\n*********************************************************");
	
	int i = 1;
	
	while (i<=10){
		printf("%d\n", i);
		i++;
	}
	return 0;
}
