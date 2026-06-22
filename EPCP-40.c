//EPCP-40
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 40 - Tabuada com while*");
	printf("\n*********************************************************");
	
    int numero, i = 1;

    printf("Digite um numero para ver a tabuada: ");
    scanf("%d", &numero);

    while (i <= 10) {
        printf("%d x %d = %d\n", numero, i, numero * i);
        i++;
    }

    return 0;
}
