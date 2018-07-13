#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define BRASIL		setlocale(LC_ALL, "portuguese_brazil")

//DEFININDO ESTRUTURA ALUNO
struct ALUNO{
	unsigned short codigo;
	char nome[30];
	unsigned short nota;
};
//DECLARANDO ESTRUTURA
struct ALUNO *aluno;

int main() {	
	printf("Largura da estrutura: %d bytes\n", sizeof(ALUNO));
	aluno = (ALUNO*)calloc(,sizeof(ALUNO));
	
	for(int i=0; i<5; i++){
		printf("Aluno %d: codigo-> %d | nome-> %s | nota-> %d\n", i, aluno[i].codigo, aluno[i].nome, aluno[i].nota);
	}
	
	return 0;
}
