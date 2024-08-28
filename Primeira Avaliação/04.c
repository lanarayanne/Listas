/*O programa abaixo representa uma função para gerar números aleatórios. 
As funções são usadas para resolver problemas complexos através de módulos e 
também para promover a reutilização de código.

4) (2,0) Faça um programa que simula o lançamento de dois dados, d1 e d2, n vezes, 
e tem como saída o número de cada dado e a soma dos dois valores. Utilize a função 
dada no programa acima. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>  

int gerarNumero ()
{
    int numero_aleatorio;
    srand(time(0));
    numero_aleatorio = rand() % 6+1; //gerar numeros de 1 a 6 (usando o if em main deixou o programa muito lento)
    return numero_aleatorio;
}

int main() {

    int dado1, dado2;
    int soma;
    int n;
    char pausa;
    
    /*Importante!
    Professor, quando eu fiz direto assim:
    
    dado1 = gerarNumero();
    dado2 = gerarNumero();
    
    Gerava sempre o mesmo numero para os dois dados, mas usando o debug gerava dois numeros diferentes.
    
    Entao coloquei uma etapa de pausa para ler um char antes de gerar o segundo dado, assim, consegui 
    gerar numeros diferentes para os dados.
    
    Escolhi a tecla enter porque qualquer outra ia precisar do enter e a segunda vez que pedia o char,
    rodava automaticamente e novamente gerava sempre o mesmo numero e nao coloquei espaco antes do %c 
    pois o usuario poderia escolher espaco, tab, enter e nao iria funcionar...
    
    */
    
    printf("Quantas vezes os dados serao jogados ?");
    scanf("%d", &n);
    scanf("%c", &pausa);
    
    for (int i=1; i<=n;i++){
        printf ("\n---------------Rodada %d---------------\n", i);
        
        printf("\nPressione enter para jogar o primeiro dado: ");
        scanf("%c", &pausa); 
        dado1 = gerarNumero();
        printf("Dado 1: %d\n", dado1);
        
        printf("\nPressione enter para jogar o segundo dado: ");
        scanf("%c", &pausa);
        dado2 = gerarNumero();
        printf("Dado 2: %d\n", dado2);
        
        soma=dado1+dado2;
        
        printf("\nSoma dos dados: %d\n", soma);
    }

    
    
    return 0;
}

