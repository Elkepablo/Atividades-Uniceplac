//EPCP-49
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "");
	
	printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 49 - Pedir senha até acertar*");
	printf("\n*********************************************************");
    
    int senha;

    do {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha!=1234) {
            printf("Senha incorreta!\n");
        }

    } while (senha!=1234);

    printf("Acesso liberado!\n");

    return 0;
}
