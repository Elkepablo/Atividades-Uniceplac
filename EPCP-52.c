//EPCP-52
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale (LC_ALL, "");
    
    printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 52 -  Soma até o número ser múltiplo de 10*");
	printf("\n*********************************************************");
    
    int num, soma=0;

    do {
        printf("Digite um numero: ");
        scanf("%d", &num);

        soma+=num;

    } while (num % 10 != 0);

    printf("Soma: %d\n", soma);

    return 0;
}
