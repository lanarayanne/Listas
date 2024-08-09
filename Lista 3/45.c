/*Faca um algoritmo que converta uma velocidade expressa em km/h para m/s e vice
versa. Voce deve criar um menu com as duas opcoes de conversao e com uma opcao
para finalizar o programa. O usuario podera fazer quantas conversoes desejar, sendo
que o programa so sera finalizado quando a opcao de finalizar for escolhida*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int opcao;
    float kmh, ms;
    
    printf("Escolha uma opcao:\n");
    printf("(1) Km/h -> m/s\n");
    printf("(2) m/s -> km/h\n");
    printf("(-1) para encerrar\n");
    scanf ("%d", &opcao);
    
    while (opcao != -1)
    {
        switch (opcao)
        {
            case 1: 
            printf ("\nInforme a velocidade em Km/h: ");
            scanf ("%f", &kmh);
            ms = kmh / 3.6;
            printf ("Velocidade = %.2f m/s", ms);
            break;
            
            case 2: 
            printf ("\nInforme a velocidade em m/s: ");
            scanf ("%f", &ms);
            kmh = ms * 3.6;
            printf ("Velocidade = %.2f m/s", kmh);
            break;
            
            default:
            printf ("Opcao Invalida");
            break;
        }
        
        printf("\n\nEscolha uma opcao:\n");
        printf("(1) Km/h -> m/s\n");
        printf("(2) m/s -> km/h\n");
        printf("(-1) para encerrar\n");
        scanf ("%d", &opcao);
    }
    
    printf ("Programa Encerrado");
    
    return 0;
}