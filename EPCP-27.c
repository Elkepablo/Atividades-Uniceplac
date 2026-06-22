//EPCP-27.c
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 27 -   Tabuada de um número*");
	printf("\n*********************************************************");
	
	
	int num, i;
	
	printf("Digite o número: ");
	scanf("%d", &num);
	
	printf("\n Tabuada do %d:\n", num);
	
	for(i=1; i<=10; i++){
		printf("%d x %d = %d\n", num, i, num*i);
	}
	return 0;
}
