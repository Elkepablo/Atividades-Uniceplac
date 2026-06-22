//EPCP-45
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "");
	
	printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 45 - Menu até escolher sair*");
	printf("\n*********************************************************");
    
    int item;

    do {
        printf("menu\n");
        printf("1) - saldo\n");
        printf("2) - Sacar\n");
        printf("3) - Depositar\n");
        printf("4) - Sair\n");
        printf("Escolha um item: ");
        scanf("%d", &item);

        switch (item) {
            case 1:
                printf("Saldo\n");
                break;
            
            case 2:
                printf("Saque\n");
                break;
            
            case 3:
                printf("Deposito\n");
                break;
            
            case 4:
                printf("finalizado\n");
                break;
            
            default:
                printf("item errado\n");
        }
        
         printf("\n");

    } while (item!=4);

    return 0;
}
