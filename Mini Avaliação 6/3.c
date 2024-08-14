/*3) (3 pontos) Escreva uma funC'C#o que receba um inteiro N como parC"metro, calcule e retorne o resultado da seguinte sC)rie .
S = 0 + 1/1 + 2/2! + 3/3! + .. +n/n!  (use comandos de repetiC'C#o). Apresente uma funC'C#o main para testes.*/

#include <stdio.h>
#include <stdlib.h>

float funcao_soma(int n) {

	int cont=1;
	float soma=0, fatorial=1;

	while (cont <=n) {

		for (int i=cont; i>0; i--) {
			fatorial = fatorial*i;
		}
		soma = soma + (cont/fatorial);
		fatorial=1;
		cont++;
	}

	return soma;
}

int main () {

	float num, soma;
	int n;

	printf ("Informe um valor N (inteiro e positivo): ");
	scanf ("%f", &num);

	while (num<0 || num != (int)num){
	    printf ("Numero invalido!\n");
	    printf ("Informe um valor N (inteiro e positivo)");
	    scanf ("%f", &num);
	}

	n = (int)num;
	soma = funcao_soma(n);

	printf ("%.2f", soma);

	return 0;
}
