//EPCP-41
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
    
    printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 41 - Número primo com while*");
	printf("\n*********************************************************");

int numero, divisor = 1, quantidade = 0; 

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while (divisor <= numero) {
        if (numero % divisor == 0) {
            quantidade++;
        }
        divisor++;
    }

    if (quantidade == 2) {
        printf("%d e um numero primo.\n", numero);
    } else {
        printf("%d nao e um numero primo.\n", numero);
    }

    return 0;
}
