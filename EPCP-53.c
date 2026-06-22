//EPCP-53
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "");
	
	printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 53 -  Confirmar saída com 's'*");
	printf("\n*********************************************************");
    
    char item;

    do {
        printf("Menu\n");
        printf("1 - Cadastrar usuario\n");
        printf("2 - Consultar cadastro\n");
        printf("Escolha um item: ");
        scanf(" %c", &item);

        if (item == '1') {
            printf("Usuario cadastrado!\n");
        } 
        else if (item == '2') {
            printf("Consulta realizada!\n");
        }
        else if (item != 's') {
            printf("item errado\n");
        }

        printf("\nDigite 's' para sair ou outra tecla para continuar: ");
        scanf(" %c", &item);

        printf("\n");

    } while (item != 's');

    printf("Programa encerrado.\n");

    return 0;
}
