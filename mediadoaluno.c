//Algoritmo: "Sistema de Notas dos Alunos"
//Autor: Yves C�sar Amorim de Azevedo
//Data: 04/09/2019

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//Introdu��o de Informa��es/Vari�veis:
	int Qa, nA; 
	float ap, rp, re, f9a10, f7a8, f6a7, f5a6,f4a5,f0a3; 
	char instituicao[50], disciplina[50];
	float qtdmedias, media_da_turma, pAP, pRP, pRE;
	
	//Atribui��o de valores como refer�ncia:
	nA = 1; //Usado no While
	ap= 0; 
	rp = 0;
	re = 0;
		//Faixas de notas:
		    f9a10= 0;
			f7a8= 0;
			f6a7= 0;
			f5a6= 0;
			f4a5= 0;
			f0a3= 0; 
	
	//Solicita��o de dados para identifica��o e desenvolvimento:
	printf("Informe o nome da instituicao: ");
		scanf("%s", &instituicao);
	printf("Informe o curso ou disciplina: ");
		scanf("%s", disciplina);
	printf("Informe quantos alunos tem na sala? ");
		scanf("%d", &Qa);	
	
	//Desenvolvimento do Algoritmo:
	while(nA <= Qa) {
		printf("\n ======Calculo de Media do Aluno====== \n\n");
		//Declara��o de Vari�veis:
			float n1, n2, n3, media;
			char Nome[25];
			
		//Dados de entrada:
			printf("Informe o nome do Aluno Avaliado: ");
				scanf("%s", &Nome);
			printf("Digite a primeira nota: ");
				scanf("%f", &n1);
			printf("Digite a segunda nota: ");
				scanf("%f", &n2);
			printf("Digite a terceira nota: ");
				scanf("%f", &n3);
		
		//processamento de dados de entrada:
			media = (n1+n2+n3)/3;
		
		//Resultados/ Sa�da:
			
				printf("\n O(a) Aluno(a) %s tem media final e: %.1f \n", Nome, media);
				
				if(media >= 7) {  //Condi��es aninhadas para Informar a situa��o do aluno.
					printf("\n PARABENS!!! Aluno(a) esta aprovado. \n\n");
						ap=ap + 1;
							if(media >= 9 && media <= 10) { //Condi��es aninhadas para atribuir valor �s faixas de notas.
								f9a10 = f9a10 + 1;
							} else if(media >= 7 && media < 9) {
								f7a8 = f7a8 + 1;
							}
				} else if(media < 7 && media >= 5) {
					printf("\n ATENCAO!!! ALUNO(A) ESTA EM RECUPERACAO FINAL. \n\n");
						rp = rp + 1;
							if(media < 7 && media >= 6) {
								f6a7 = f6a7 + 1;
							} else if(media >= 5 && media < 6) {
								f5a6 = f5a6 + 1;
							}
				} else {
					printf("\n ALUNO(A) REPROVADO!!! \n\n");
						re = re + 1;
							if (media < 5 && media >= 4) {
								f4a5 = f4a5 + 1;
							} else if(media < 4) {
								f0a3 = f0a3 + 1;
							}
				}
			nA++;
			qtdmedias = qtdmedias + media; //resulta, no fim do looping, a soma de todas as m�dias.
	}
	
	//Tratamento de dados:
		media_da_turma = qtdmedias/Qa;
		pAP= (ap/Qa) * 100;
		pRP= (rp/Qa) * 100;
		pRE= (re/Qa) * 100;
	//Informa��es finais:
	printf("=== Informacoes Finais === \n"); //identifica��o e m�dia da turma.
		printf("\n Instituicao: %s", instituicao);
		printf("\n Curso/ disciplina: %s", disciplina);
		printf("\n A media da turma e %.1f \n", media_da_turma); 
	printf("\n === Informacoes recolhidas dos dados === \n ");  //Quantidade de aprovados, recuperandos e reprovados.
		printf("alunos aprovados: %.0f \n", ap);
		printf("alunos em recuperacao: %.0f \n", rp);
		printf("alunos reprovados: %.0f \n", re);
	printf("\n === Informacoes percentuais === \n"); //Percentuais da Turma.
		printf("alunos aprovados: %.2f%% \n", pAP);
		printf("alunos em recuperacao: %.2f%% \n", pRP);
		printf("alunos reprovados: %.2f%% \n", pRE);
	printf("\n === Analise de desempenho dos alunos === \n"); //Informa��es a respeito da faixa de notas.
		printf("Quantidade de alunos na faixa de notas: \n");
			printf("-Entre 9 e 10: %.0f alunos\n", f9a10);
			printf("-Entre 7 e 8.9: %.0f alunos\n", f7a8);
			printf("-Entre 6 e 6.9: %.0f alunos\n", f6a7);
			printf("-Entre 5 e 5.9: %.0f alunos\n", f5a6);
			printf("-Entre 4 e 4.9: %.0f alunos\n", f4a5);
			printf("-Entre 0 e 3.9: %.0f alunos\n", f0a3);

system("pause");	
return 0;
}
