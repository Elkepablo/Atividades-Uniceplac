//EPCP-16.c
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

    printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 16 - Múltiplo de 3 e/ou 5*");
	printf("\n*********************************************************");

int main(){
setlocale (LC_ALL,"");

int numeropedido;

printf("Digite o número do pedido: ");
scanf("%d", &numeropedido);

if(numeropedido %3==0){
	printf("Parabéns, você ganhou um refrigerante!\n");
}
if(numeropedido %5==0){
	printf("Parabéns, você ganhou uma sobremesa!\n");
}
if(numeropedido %2==0){
	printf("Parabéns, você ganhou dois brindes!\n");
}
return 0;
}
