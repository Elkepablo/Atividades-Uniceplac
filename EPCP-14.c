//EPCP-14.c
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "");
	
	printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 14 - Tipo de Triângulo*");
	printf("\n*********************************************************");
	
	float a, b, c;
	
	printf("Digite a medida do lado a: ");
	scanf("%f", &a);
	
	printf("Digite a medida do lado b: ");
	scanf("%f", &b);
	
	printf("Digite a medida do lado c: ");
	scanf("%f", &c);
	
	if(a==b && b==c){
		printf("O triangulo é equilátero.");
	}
	else if(a==b || a==c || b==c){
		printf("O triangulo é Isósceles.");
	}
	else{
		printf("O triangulo é escaleno");
	}
	return 0;
}

