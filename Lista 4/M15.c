/* Leia uma matriz 5 x 10 que se refere respostas de 10 questoes de m ˜ ultipla escolha, ´
referentes a 5 alunos. Leia tambem um vetor de 10 posic¸ ´ oes contendo o gabarito de ˜
respostas que podem ser a, b, c ou d. Seu programa devera comparar as respostas ´
de cada candidato com o gabarito e emitir um vetor denominado resultado, contendo a
pontuac¸ao correspondente a cada aluno. ́*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
	char matriz[5][10]= {0};
	char resposta;
	char gabarito[10];
	int notas[5]={0};
	int soma=0;
	
	printf("Informe o gabarito (De a - d):\n");
	
	for (int i=0;i<10;i++){
	    
	    scanf(" %c", &resposta);
	    if (resposta=='a'|| resposta=='b'||resposta=='c'||resposta=='d'){
	        gabarito[i]=resposta;
	    }
	    else {
	        printf("Alternativa invalida!\nTente novamente:\n");
	        i--;
	    }
	}
	
	
	//Preencher respostas dos alunos
	printf("\nInforme as respostas dos alunos:\n");
	
	for (int m=0; m<5; m++) {
	    printf("\nAluno %d: ", m+1);
	    
		for (int n=0; n<10; n++) {
			scanf(" %c", &resposta);
    	    if (resposta=='a'|| resposta=='b'||resposta=='c'||resposta=='d'){
    	        matriz[m][n]=resposta;
    		}
    		else {
	        printf("Alternativa invalida!\nTente novamente:\n");
	        n--;
	        }
	    }
	}
	
	// Calcular nota
	
	for (int m=0; m<5; m++) {
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
	
	for (int m=0; m<5; m++) {
	    printf("\nAluno %d: ",m+1);
		for (int n=0; n<10; n++) {
			printf ("%c ", matriz[m][n]);
		}
	}
	
	//Imprimir Notas
	printf("\n\nNotas:");
	for (int i=0; i<5; i++) {
	    printf("\nAluno %d: %d",i+1, notas[i]);
	}
	
	return 0;
}