//EPCP-30
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 30 - Fatorial de um número*");
	printf("\n*********************************************************");
	
	int num, i;
	int fatorial=1;
	
	printf("Digite o número: ");
	scanf("%d", &num);
	
	for(i=1; i<=num; i++){
	
	fatorial= fatorial*i;
}
	
	printf("O fatorial de %d é %d", num, fatorial);
	
	return 0;
}
