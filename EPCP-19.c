//EPCP-19.c
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale (LC_ALL, "");
	
	printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 19 - Ordem crescente (três números)*");
	printf("\n*********************************************************");
	
	int n1, n2, n3, aux;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &n1);
	
	printf("Digite o segundo número: ");
	scanf("%d", &n2);
	
	printf("Digite o terceiro número: ");
	scanf("%d", &n3);
	
	if (n1>n2){
		aux=n1;
		n1=n3;
		n3=aux;
	}
	if (n2>n3){
		aux=n2;
		n2=n3;
		n3=aux;
	}
	printf("Os números em ordem crescente é\n %d \n %d\n %d\n", n1, n2, n3);
	return 0;
}
