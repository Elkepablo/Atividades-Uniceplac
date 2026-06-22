//EPCP-17.c
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale (LC_ALL, "");
	
	printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 17 - O Sensor do Parque Temático*");
	printf("\n*********************************************************");
	
	int altura;
	
	printf("Digite a altura em centímetros: ");
	scanf("%d", &altura);
	
	if(altura>=140){
		printf("Liberado!");
	}
	else{
		printf("Bloqueado!");
	}
	return 0;
}
