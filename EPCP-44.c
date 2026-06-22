//EPCP-44
#include<stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "");
	
	printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 44 - Contar dígitos de um número*");
	printf("\n*********************************************************");
	
	int num, contador=0;
	
	scanf("%d", &num);
	
	while(num>0){
		num=num/10;
		contador++;
	}
	
	printf("%d\n", contador);
	
	return 0;
}
