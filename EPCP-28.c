//EPCP-28
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 28 - Soma dos 100 primeiros números naturais*");
	printf("\n*********************************************************");
	
	int num, i;
	
	printf("Digite o número a ser somado: ");
	scanf("%d", &num);
	
	printf("\nA soma do número %d até 100:\n");
	
	for(i=1; i<=100; i++){
		printf("%d + %d = %d\n", num, i, num+i);
	}
	return 0;
}
