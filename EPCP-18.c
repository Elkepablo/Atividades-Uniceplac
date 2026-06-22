//EPCP-18.c
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	printf("\n*********************************************************");
	printf("\n*ALUNO: ELKE PABLO CARDOSO PINHO - 0025900*");
	printf("\n*PROGRAMA EPCP - 18 - Login simples*");
	printf("\n*********************************************************");
	
	
	char usuario[10];
	char senha[10];
	
	printf("Digite o usuário: ");
	scanf("%s", &usuario);
	
	printf("Digite a senha: ");
	scanf("%s", &senha);
	
	if (strcmp(usuario, "aluno") == 0 && strcmp(senha, "1978")==0){
		printf("Acesso liberado!");
	}
	else{
		printf("Acesso negado!");
	}
	return 0;
}
