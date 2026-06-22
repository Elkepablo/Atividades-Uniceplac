//EPCP-23
#include<stdio.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "");
	
	printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 23 - Maior de dois números*");
	printf("\n*********************************************************");
	
	int n1, n2;
	
	printf("Digite a primeira pontuação: ");
	scanf("%d", &n1);
	
	printf("Digite a segunda pontiação: ");
	scanf("%d", &n2);
	
	if(n1>n2){
		printf("A pontuação %d é maior.", n1);
	}
	else if(n2>n1){
		printf("A pontuação %d é maior.", n2);
	}
	else{
		printf("As pontuações são iguais.");
	}
	return 0;
}
