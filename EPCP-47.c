//EPCP-47
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale (LC_ALL, "");
    
    printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 47 - Tabuada de um número*");
	printf("\n*********************************************************");
    
    int num, i=1;

    scanf("%d", &num);

    do {
        printf("%d x %d = %d\n", num, i, num*i);
        i++;
    } while (i<=10);

    return 0;
}
