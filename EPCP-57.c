//EPCP-57
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "");
	
	printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 57 - A Central do Brinquedo Eletrônico");
	printf("\n*********************************************************");
    
    char cor[20];

    printf("Digite a cor da luz: ");
    scanf("%s", cor);

    if (strcmp(cor, "Verde") == 0) {
        printf("O urso diz: Vamos brincar la fora!\n");
    }
    else if (strcmp(cor, "Amarelo") == 0) {
        printf("O urso diz: Estou ficando com soninho...\n");
    }
    else if (strcmp(cor, "Vermelho") == 0) {
        printf("O urso diz: Estou com fome, hora do lanche!\n");
    }
    else {
        printf("Cor desconhecida\n");
    }

    return 0;
}
