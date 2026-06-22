//EPCP-34
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 34 - Verificar se um número é primo*");
	printf("\n*********************************************************");
	
	
	int i, num, primo = 1;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	if(num == 0 || num == 1){
		printf("O número não é primo!", num);
	}
	else if(num == 2){
		printf("O número é primo!");
	}
	else{
		for(i=2; i<num; i++){
			if(num % i == 0){
				primo = 0;
				printf("O número não é primo!");
				break;
			}
			else{
				printf("O número é primo!");
				break;
			}
		}
	}
	return 0;
}
