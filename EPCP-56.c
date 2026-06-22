//EPCP-56
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "");
	
	printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 56 - O Menu do Fast-Food Digital");
	printf("\n*********************************************************");
    
    int item;

    printf("Fast-Food Digital\n");
    printf("1 - Combo Hamburguer + Batata + Refri\n");
    printf("2 - Combo Pizza Brotinho + Refri\n");
    printf("3 - Combo Salada + Suco Natural\n");
    printf("4 - Combo Balde de Frango + Molho\n");

    printf("Escolha seu combo (1 a 4): ");
    scanf("%d", &item);

    switch (item) {
        case 1:
            printf("Combo Hamburguer + Batata + Refri - R$ 30,00\n");
            break;

        case 2:
            printf("Combo Pizza Brotinho + Refri - R$ 25,00\n");
            break;

        case 3:
            printf("Combo Salada + Suco Natural - R$ 22,00\n");
            break;

        case 4:
            printf("Combo Balde de Frango + Molho - R$ 35,00\n");
            break;

        default:
            printf("item errado. Escolha de 1 a 4.\n");
    }

    return 0;
}
