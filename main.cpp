#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define BRASIL			setlocale(LC_ALL, "portuguese_brazil")
#define LIMPAR_TELA		system("cls")	

//DEFININDO ESTRUTURA ALUNO
struct ALUNO{
	unsigned short codigo;
	char nome[30];
	unsigned short nota;
};
//DECLARANDO ESTRUTURA
struct ALUNO *aluno;

//PROTOTIPOS
void cadastrar_ALUNOS();
void pesquisar_ALUNOS();
void excluir_ALUNOS();
void alterar_ALUNOS();
void mostrar_ALUNOS();

//Entry of the main
int main() {BRASIL;
	cadastrar_ALUNOS();
	mostrar_ALUNOS();
	return 0;
}

//PROCEDIMENTO: cadastrar Aluno
void cadastrar_ALUNOS(){	
	unsigned short qtde = 0;//var recebe quantidade
	
	printf("Insira a quantidade de alunos[números]:"); scanf("%d", &qtde);
	
	aluno = (ALUNO*)calloc(qtde, sizeof(ALUNO));//alocando memoria
	
	//loop de criação de alunos
	for(int i = 0; i < qtde; i++){
		printf("Matricula:"); 	scanf("%d", &aluno[i].codigo);
		printf("Nome:"); 		scanf("%s", &aluno[i].nome);
		printf("Nota:"); 		scanf("%d", &aluno[i].nota);
		
		if(i != qtde-1)//chegou no ultimo indice? 
			++aluno;//proximo aluno
			
		LIMPAR_TELA;
	}
} 

//PROCEDIMENTO: mostrar Aluno
void mostrar_ALUNOS(){
	int i=0; //variavel genérica
	printf("id |	matricula    nome     nota\n");
	while(aluno != NULL){
		printf("%d | [%d] [%s] [%d]\n", i, aluno[i].codigo, aluno[i].nome, aluno[i].nota);
		i++;
		++aluno;
	}
}
