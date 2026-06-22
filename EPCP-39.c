//EPCP-39
#include <stdio.h>
#include <locale.h>

int main() {
    int numero;
    
    printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 39 - Verificar se um número é positivo*");
	printf("\n*********************************************************");

    do {
        printf("Digite um numero positivo: ");
        scanf("%d", &numero);

        if (numero <= 0) {
            printf("Valor invalido! Digite um numero positivo.\n");
        }

    } while (numero <= 0);

    printf("Numero aceito: %d\n", numero);

    return 0;
}
