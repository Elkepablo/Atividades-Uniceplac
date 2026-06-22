//EPCP-20.c
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 20 - Ano bissexto*");
	printf("\n*********************************************************");
	
	
	int ano;
	
	printf("Digite o ano: ");
	scanf("%d", &ano);
	
	if ((ano % 4 == 0 && ano % 100 != 0)|| (ano %400==0)){
		printf("O ano é bissexto!");
	}
	else{
		printf("O ano não é bissexto.");
	}
	return 0;
}
