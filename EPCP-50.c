//EPCP-50
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale (LC_ALL, "");
    
    printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 50 - Número positivo obrigatório*");
	printf("\n*********************************************************");
    
    int valor;

    do {
        printf("Digite um valor positivo: ");
        scanf("%d", &valor);

        if (valor <= 0) {
            printf("Valor invalido! Digite um numero positivo\n");
        }

    } while (valor <= 0);

    printf("Deposito aceito: %d\n", valor);

    return 0;
}
