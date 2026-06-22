//EPCP-25.c
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale (LC_ALL, "");
	
	printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 25 -  Notas e aprovação*");
	printf("\n*********************************************************");
	
	int media;
	
	printf("Digite sua média final: ");
	scanf("%d", &media);
	
	if(media>=7){
		printf("Aprovado!");
	}
	else if(media<7 && media>=4){
		printf("Recuperação.");
	}
	else{
		printf("Reprovado.");
	}
	return 0;
}
