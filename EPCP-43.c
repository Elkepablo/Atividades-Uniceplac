#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 43 - Soma dos pares entre 1 e 100*");
	printf("\n*********************************************************");
	
	int i=1, soma = 0;
	
	while (i<=100){
		if(i % 2 == 0){
			soma+=i;
		}
		i++;
	}
	
	printf("A soma de todos os números pares é: %d", soma);
	
	return 0;
}
