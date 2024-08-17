/* Fac¸a um programa para corrigir uma prova com 10 questoes de m ˜ ultipla escolha ( ´ a, b,
c, d ou e), em uma turma com 3 alunos. Cada questao vale 1 ponto. Leia o gabarito, e ˜
para cada aluno leia sua matricula (numero inteiro) e suas respostas. Calcule e escreva: ´
Para cada aluno, escreva sua matr´ıcula, suas respostas, e sua nota. O percentual de
aprovac¸ao, assumindo m ˜ edia 7.0. ́*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
	char matriz[3][10]= {0};
	char resposta;
	char gabarito[10];
	int matricula[3]={0};
	int notas[3]={0};
	int soma=0;
	
	printf("Informe o gabarito (De a - e):\n");
	
	for (int i=0;i<10;i++){
	    printf("%d) ", i+1);
	    scanf(" %c", &resposta);
	    if (resposta=='a'|| resposta=='b'||resposta=='c'||resposta=='d' || resposta=='e'){
	        gabarito[i]=resposta;
	    }
	    else {
	        printf("Alternativa invalida!\nTente novamente:\n");
	        i--;
	    }
	}
	
	
	//Preencher respostas dos alunos
	printf("\nInforme as respostas dos alunos:\n");
	
	for (int m=0; m<3; m++) {
	    printf("Numero de matricula: ");
	    scanf("%d", &matricula[m]);
	    printf("\nAluno %d:\n", matricula[m]);
	    
		for (int n=0; n<10; n++) {
		    printf("%d) ", n+1);
			scanf(" %c", &resposta);
    	    if (resposta=='a'|| resposta=='b'||resposta=='c'||resposta=='d' || resposta=='e'){
    	        matriz[m][n]=resposta;
    		}
    		else {
	        printf("Alternativa invalida!\nTente novamente:\n");
	        n--;
	        }
	    }
	}
	
	// Calcular nota
	
	for (int m=0; m<3; m++) {
		for (int n=0; n<10; n++) {
			if (matriz[m][n]==gabarito[n]){
			    soma=soma+1;
			}
		}
		notas[m]=soma;
		soma=0;
	}
	
	//Imprimir Gabarito
	
	printf("Gabarito: ");
	
	for (int i=0;i<10;i++){
	    printf ("%c ", gabarito[i]);
	}

	//Imprimir respostas dos alunos
	
	printf("\n\nRespostas");
	
	for (int m=0; m<3; m++) {
	    printf("\nMatricula %d: ",matricula[m]);
		for (int n=0; n<10; n++) {
			printf ("%c ", matriz[m][n]);
		}
	}
	
	//Imprimir Notas
	printf("\n\nNotas:");
	for (int i=0; i<3; i++) {
	    printf("\nMatricula %d  Nota = %d", matricula[i], notas[i]);
	}
	
	return 0;
}