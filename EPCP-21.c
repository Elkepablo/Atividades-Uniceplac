//EPCP-21.c
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 21 - Número positivo ou negativo*");
	printf("\n*********************************************************");
	
	int num;
	
	printf("Digite o número: ");
	scanf("%d", &num);
	
	if(num>0){
		printf("O número é positivo.");
	}
	else if(num<0){
		printf("O número é negativo.");
	}
	else{
		printf("O número é 0.");
	}
	return 0;
}
