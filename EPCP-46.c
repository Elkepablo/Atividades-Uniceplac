//EPCP-46
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale (LC_ALL, "");
    
    printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 46 - Contar de 1 a 10*");
	printf("\n*********************************************************");
    
    int num=1;

    do {
        printf("%d\n", num);
        num++;
    } while (num<= 10);

    return 0;
}
