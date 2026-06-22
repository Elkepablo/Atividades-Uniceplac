//EPCP-55
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale (LC_ALL, "");
    
    printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 55 -   Ler números e mostrar o maior (até digitar negativo)");
	printf("\n*********************************************************");
    
    int num, maior=0;

    do {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num > maior) {
            maior = num;
        }

    } while (num >= 0);

    printf("Maior numero positivo informado: %d\n", maior);

    return 0;
}
