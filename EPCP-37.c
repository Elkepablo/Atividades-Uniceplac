//EPCP-37
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 37 - Soma de números até digitar zero*");
	printf("\n*********************************************************");
	
	
	int i, valores, soma;
	
	printf("Digite os valores da compra(0 para encerrar):\n");
	
	while (1){
		scanf("%d", &valores);
		if (valores == 0){
		break;
	}
	soma += valores;
	}
	
	printf("Valor das compras: %d", soma);
	
	return 0;
}
