#include <stdio.h>
#include <locale.h>

int main() {
	setlocale("LC_ALL", "");
	
	printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 35 - Números de Fibonacci (n termos)*");
	printf("\n*********************************************************");
	
    int n, i;
    int a = 0, b = 1, proximo;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    printf("Sequencia de Fibonacci: ");

    for (i = 1; i <= n; i++) {
        printf("%d ", a);

        proximo = a + b;
        a = b;
        b = proximo;
    }

    return 0;
}
