#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define BRASIL				setlocale(LC_ALL, "portuguese_brazil")
#define LIMPAR_TELA			system("cls")	

//DEFININDO ESTRUTURA ALUNO
struct ALUNO{
	unsigned short matricula;
	char nome[30];
	unsigned short nota;
}; ALUNO *aluno; //declarando estrutura

//PROTOTIPOS
void cadastrar_ALUNOS();
void buscar_ALUNOS();
void excluir_ALUNOS();
void alterar_ALUNOS();
void listar_ALUNOS();
void menu();

//Entry of the main											<----------- main
int main() {BRASIL;
	menu();
	return 0;
}

//PROCEDIMENTO: menu
void menu(){
	int op; //opção digitada
	do{LIMPAR_TELA;
		printf(" ================= SISTEMA ACADÊMICO ================= \n");
		printf("	1 - Cadastrar alunos\n");
		printf("	2 - Listar todos os alunos\n");
		printf("	3 - Listar Alunos aprovados\n");
		printf("	4 - Buscar aluno por nome\n");
		printf("	5 - Buscar aluno por diciplina\n");
		printf("	6 - Alterar aluno\n");
		printf("	7 - Excluir aluno\n");
		printf("	0 - SAIR\n\n");
		
		printf("Digite aqui[0 - 7]: "); scanf("%d", &op);//lendo opção
		
		switch(op){
			case 1:
				LIMPAR_TELA; 
				cadastrar_ALUNOS();
				break;
			case 2:
				LIMPAR_TELA; 
				printf("FUNÇÃO...\n");
				break;
			case 3:
				LIMPAR_TELA; 
				printf("FUNÇÃO...\n");
				break;
			case 4:
				LIMPAR_TELA;  
				printf("FUNÇÃO...\n");
				break;LIMPAR_TELA;
			case 5: 
				LIMPAR_TELA; 
				printf("FUNÇÃO...\n");
				break;
			case 6: 
				LIMPAR_TELA; 
				printf("FUNÇÃO...\n");
				break;
			case 7: 
				LIMPAR_TELA; 
				printf("FUNÇÃO...\n");
				break;
		}
	}while(op != 0);
	printf("Saindo...");
}

//PROCEDIMENTO: cadastro 
void cadastrar_ALUNOS(){
	unsigned short qtde; //quantidade alunos
	
	printf("Qtde de Alunos:"); 		scanf("%d", &qtde);
	aluno = (ALUNO*)realloc(aluno ,qtde * sizeof(ALUNO));
	LIMPAR_TELA;
	for(int i=1; i <= qtde; i++){
		printf("Aluno[%d]\n", i);
		printf("	MATRICULA: "); 	scanf("%d", &aluno[i].matricula);
		printf("	NOME: "); 		scanf("%s", &aluno[i].nome);
		printf("	NOTA: "); 		scanf("%d", &aluno[i].nota);
		LIMPAR_TELA;
		
		if(i != qtde)//até o penultimo indice
			++aluno;
	}
	LIMPAR_TELA;
	printf("Cadastro concluido.\n");
	system("pause");
}

//PROCEDIMENTO: listar alunos
void listar_ALUNOS(){
	
}


