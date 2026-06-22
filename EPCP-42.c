//EPCP-42
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 42 - Quantidade de números ímpares digitados*");
	printf("\n*********************************************************");
	
	int num, i=0, impares=0;
	
	while (i<10){
	printf("Digite um número: ");
	scanf("%d", &num);

if (num % 2 != 0){
	impares++;
}
i++;
}
printf("Quantidade de números ímpares são: %d\n", impares);

return 0;
}
