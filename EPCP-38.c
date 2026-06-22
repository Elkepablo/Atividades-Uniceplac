//EPCP-38
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 38 - Senha correta*");
	printf("\n*********************************************************");
	
	
	int senha;
	
	printf("Digite a senha: ");
	
	while (1){
		scanf("%d", &senha);
		if(senha == 1234){
			break;
		}
		}
	}
	print("Acesso permitido!", senha);
	
	return 0;
}
