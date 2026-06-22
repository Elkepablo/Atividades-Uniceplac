//EPCP-48
#include <stdio.h>
#include <locale.h>

int main() {
	 setlocale (LC_ALL, "");
	 
	printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 48 - Menu com opção de sair*");
	printf("\n*********************************************************");
    
    
    int item;

    do {
        printf("1 - Mensagem\n");
        printf("2 - Sair\n");
        printf("Escolha um item: ");
        scanf("%d", &item);

        if (item==1) {
            printf("mensagem\n");
        } 
        else if (item==2) {
            printf("Saindo\n");
        } 
        else {
            printf("item errado\n");
        }

        printf("\n");

    } while (item!=2);

    return 0;
}
