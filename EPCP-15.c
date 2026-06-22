//EPCP-15.c
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	printf("\n**************************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900");
	printf("\n*PROGRAMA EPCP - 15 - Quantas caixas cabem dentro do caminhão*");
	printf("\n**************************************************************");
	
	float altura1, largura1, comprimento1, altura2, largura2, comprimento2;
	int quantidadealtura, quantidadelargura, quantidadecomprimento, totalcaixas;
	
	printf("Digite a altura do caminhão em centímetros: ");
	scanf("%f", &altura1);
	
	printf("Digite a largura do caminhão em centímetros: ");
	scanf("%f", &largura1);
	
	printf("Digite a comprimento do caminhão em centímetros: ");
	scanf("%f", &comprimento1);
	
	printf("Digite a altura da caixa em centímetros: ");
	scanf("%f", &altura2);
	
	printf("Digite a largura da caixa em centímetros: ");
	scanf("%f", &largura2);
	
	printf("Digite a comprimento da caixa em centímetros: ");
	scanf("%f", &comprimento2);
	
	quantidadealtura=altura1/altura2;
	
	quantidadelargura=largura1/largura2;
	
	quantidadecomprimento=comprimento1/comprimento2;
	
	totalcaixas=quantidadealtura*quantidadelargura*quantidadecomprimento;
	
	printf("Cabem %d no caminhão.", totalcaixas);
	return 0;
}
