/*39. Escreva um programa que leia um numero inteiro positivo  ́ n e em seguida imprima n
linhas do chamado Triangulo de Pascal:
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1*/

#include<stdio.h>
#include<stdlib.h>

int main (){
    
    int num;
    int numeros[1000][1000]={0};
    int cont_total_num = 0;
    
    printf ("Informe um numero <=1.000: ");
    scanf("%d", &num);
    
    while (num>=1000){
        printf ("\nValor Invalido!\nInforme um numero\n(Obs.: O numero deve ser <10.000: ");
        scanf("%d", &num);
    }
    
    for (int m=0; m<num; m++){
        for (int n=0; n<num; n++){
            if (n==0 ){
                numeros[m][n]=1;
            }
            else if (n==m){
                numeros[m][n]=1;
            }
            else {
                numeros[m][n]= numeros[m-1][n-1]+numeros[m-1][n];
            }
        }
    }
    
    printf ("\nTRIANGULO DE PASCAL\n");
    
    for (int m=0; m<num; m++){
        for (int n=0; n<num; n++){
            if (n<=m){
                printf ("%d ", numeros[m][n]);
            }
        }
	    printf ("\n");
    }

    return 0;
}