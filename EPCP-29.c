//EPCP-29
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 29 - Números pares de 0 a 50*");
	printf("\n*********************************************************");
	
	int i;
	
	printf("Os números pares de 1 a 50 são:\n");
	
	for(i=0; i<=50; i++){
	
	if(i%2==0){
		printf("%d\n", i);
	}
}
	return 0;
}
