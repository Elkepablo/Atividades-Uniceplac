//EPCP-24
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 24 - Pode votar?*");
	printf("\n*********************************************************");
	
	
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if(idade>=16){
		printf("Pode votar!");
	}
	else{
		printf("Não pode votar!");
	}
	return 0;
}
