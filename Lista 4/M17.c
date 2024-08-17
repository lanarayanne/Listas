/* Leia uma matriz 10 x 3 com as notas de 10 alunos em 3 provas. Em seguida, escreva
o numero de alunos cuja pior nota foi na prova 1, o n ´ umero de alunos cuja pior nota foi ´
na prova 2, e o numero de alunos cuja pior nota foi na prova 3. Em caso de empate ´
das piores notas de um aluno, o criterio de desempate ´ e arbitr ´ ario, mas o aluno deve ser ´
contabilizado apenas uma veź*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
	float matriz_notas[10][3]= {0};
	float nota, menorNota=10;
	int localizador;
	int cont1=0, cont2=0, cont3=0;
	int contador=0;
	
	
	//Preencher notas dos alunos
	printf("\nInforme as notas dos alunos:\n");
	
	for (int m=0; m<10; m++) {
	    printf("\nAluno %d\n", m+1);
	    
		for (int n=0; n<3; n++) {
		    printf("Nota %d:", n+1);
			scanf(" %f", &nota);
    	    if (nota>=0 && nota<=10){
    	        matriz_notas[m][n]=nota;
    		}
    		else {
	        printf("Nota invalida!\nTente novamente:\n");
	        n--;
	        }
	    }
	}
	
	//Procurar menor nota 
	
	for (int m=0; m<10; m++) {
		for (int n=0; n<3; n++) {
		    if (matriz_notas[m][n]<=menorNota){
		        menorNota = matriz_notas[m][n];
		        localizador=n;
		    }
		}
		if (localizador==0){
	        cont1++;
	    }
	    if (localizador==1){
	        cont2++;
	    }
	    if (localizador==2){
	        cont3++;
	    }
	    menorNota = 10;
	}
	
	
	printf("\nPior nota na prova 1: %d alunos", cont1);
	printf("\nPior nota na prova 2: %d alunos", cont2);
	printf("\nPior nota na prova 3: %d alunos", cont3);
	
	
	return 0;
}