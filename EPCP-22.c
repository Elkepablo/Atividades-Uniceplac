//EPCP-22.c
#include<stdio.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "");
	
	printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 22 - Par ou ímpar*");
	printf("\n*********************************************************");
	
	int num;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	if(num %2==0){
		printf("O número é par!");
	}
	else{
		printf("O número é ímpar!");
	}
	return 0;
}
