//EPCP-54
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale (LC_ALL, "");
    
    printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 54 -  Validar número entre 1 e 5*");
	printf("\n*********************************************************");
    
    int nivel;

    do {
        printf("Digite o nivel de dificuldade (1 a 5): ");
        scanf("%d", &nivel);

        if (nivel < 1 || nivel > 5) {
            printf("Nivel invalido! Tente novamente.\n");
        }

    } while (nivel < 1 || nivel > 5);

    printf("Nivel escolhido: %d\n", nivel);

    return 0;
}
