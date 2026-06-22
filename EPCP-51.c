//EPCP-51
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "");
	
	printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 51 -  Contagem regressiva de 10 até 1*");
	printf("\n*********************************************************");
    
    int num=10;

    do {
        printf("%d\n", num);
        num--;
    } while (num>=1);

    return 0;
}
