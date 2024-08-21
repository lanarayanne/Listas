/*FacB8a um programa que leia uma matriz de 5 linhas e 4 colunas contendo as seguintes
informacB8oes sobre alunos de uma disciplina, sendo todas as informacB8 Koes do tipo inteiro: K
b" Primeira coluna: numero de matr B4 B4D1cula (use um inteiro)
b" Segunda coluna: media das provas B4
b" Terceira coluna: media dos trabalhos B4
b" Quarta coluna: nota final
Elabore um programa que:
5
(a) Leia as tres primeiras informacB8 K oes de cada aluno K
(b) Calcule a nota final como sendo a soma da media das provas e da m B4 edia dos B4
trabalhos
(c) Imprima a matrB4D1cula do aluno que obteve a maior nota final (assuma que so existe B4
uma maior nota)
(d) Imprima a media aritm B4 etica das notas finais
L*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
	int matriz[5][4]= {0};
// int matriz[5][4]= {60,12,30,0,61,23,32,0,62,33,50,0,63,15,45,0,64,65,98,0};
	int vetor[3]= {0};
	int opcao=0;
	int valor_teste;
	int teste_matricula=0;
	int maior_nota;
	int soma_notas=0;
	float media_notas;
	int localizador_aluno;

	printf("Escolha como voce deseja preencer a tabela\n(1) Preencher por linha\n(2)Preencher por coluna\n(3)Sair: ");
	scanf("%d", &opcao);

	while (opcao<1 || opcao>3) {
		printf("Opcao invalida!\nTente Novamente: ");
		scanf("%d", &opcao);
	}

	switch (opcao) {
	case 1:

		for (int m=0; m<5; m++) {
			printf("\nAluno %d:\n", m+1);
			for (int n=0; n<4; n++) {
				if (n==0) {
					printf("Numero matricula: ");
					scanf(" %d", &valor_teste);
					for (int i=0;i<=m;i++){
					    if (valor_teste == matriz[i][n]){
					        teste_matricula=1;
					    }
					}
					if (teste_matricula == 0){
					    matriz[m][n]=valor_teste;
					}
					else {
					    printf("! ERRO ! Numero de matricula ja informado.\nTente novamente:\n");
					    n--;
					}
					teste_matricula = 0;
				}
				if (n==1) {
					printf("Media das provas: ");
					scanf(" %d", &valor_teste);
					if (valor_teste>=0 && valor_teste<=100) {
						matriz[m][n] = valor_teste;
					}
					else {
						printf("Valor invalido!\nTente novamente:");
						n--;
					}
				}
				if (n==2) {
					printf("Media dos trabalhos: ");
					scanf(" %d", &valor_teste);
					if (valor_teste>=0 && valor_teste<=100) {
						matriz[m][n] = valor_teste;
					}
					else {
						printf("Valor invalido!\nTente novamente:");
						n--;
					}
				}
			}
		}
		break;

	case 2:

		int linha=0;

		for (int coluna=0; coluna<4; coluna++) {
			if (coluna==0) {
				printf ("Numero Matricula\n");
				while (linha<5) {
					printf ("Aluno %d)", linha+1);
					scanf (" %d", &valor_teste);
					
					for (int i=0;i<=linha;i++){
					    if (valor_teste == matriz[i][coluna]){
					        teste_matricula=1;
					    }
					}
					if (teste_matricula == 0){
					    matriz[linha][coluna]=valor_teste;
					    linha++;
					}
					else {
					    printf("! ERRO ! Numero de matricula ja informado! Tente novamente.\n");
					}
					teste_matricula = 0;

				}
			}

				linha = 0;

				if (coluna==1) {
					printf ("Media das provas\n:");
					while (linha<5) {
						printf ("Aluno %d)", linha+1);
						scanf (" %d", &valor_teste);
						if (valor_teste>=0 && valor_teste<=100) {
							matriz[linha][coluna] = valor_teste;
							linha ++;
						}
						else {
							printf("Valor invalido!\nTente novamente:");
							linha--;
						}
					}
				}

				linha =0;

				if (coluna==2) {
					printf ("Media dos trabalhos:\n");
					while (linha<5) {
						printf ("Aluno %d)", linha+1);
						scanf (" %d", &valor_teste);
						if (valor_teste>=0 && valor_teste<=100) {
							matriz[linha][coluna] = valor_teste;
							linha ++;
						}
						else {
							printf("Valor invalido!\nTente novamente:");
							linha--;
						}
					}
				}

			}
			break;

		case 3:
			printf("Programa Encerrado\n");
			break;
	}
	

	for (int m=0; m<5; m++) {
		for (int n=0; n<4; n++) {
		    if (n==3){
		        matriz[m][n] = matriz[m][n-2] + matriz[m][n-1];
		        soma_notas=soma_notas+matriz[m][n];
		        if (m==0){
		            maior_nota=matriz[m][n];
		        }
		        else {
		            if (matriz[m][n]>maior_nota){
		                maior_nota = matriz[m][n];
		            }
		        }
		    }
		    
			printf("%d ", matriz[m][n]);
			
		}
		printf("\n");
	}
	
	for (int m=0; m<5; m++) {
		for (int n=0; n<4; n++) {
		    if (n==3){
		        if(matriz[m][n] == maior_nota){
		            localizador_aluno= m;
		        }
		    }
		}
	}
	
	media_notas=(float)soma_notas/5;
	
	printf("\nMatricula do aluno com maior nota: %d\nNota = %d", matriz[localizador_aluno][0], matriz[localizador_aluno][3]);
	printf("\nMedia das notas finais = %.2f", media_notas);


	return 0;
}