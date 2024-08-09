/*Escreva um programa que leia o numero de habitantes de uma determinada cidade, o
valor do kwh, e para cada habitante entre com os seguintes dados: consumo do mesˆ
e o codigo do consumidor (1-Residencial, 2-Comercial, 3-Industrial). No final imprima o ´
maior, o menor e a media do consumo dos habitantes; e por fim o total do consumo de ´
cada categoria de consumidor.*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int hab, codigo, cont=1;
    float kwh, consumo, maior, menor, media, soma1=0, soma2=0, soma3=0, soma=0;
    
    printf ("Quantidade de habitantes: ");
    scanf ("%d", &hab);
    
    printf ("Valor do Kwh: ");
    scanf ("%f", &kwh);
    
    while (cont<=hab)
    {
        printf ("\n%d. Consumo Mensal: ", cont);
        scanf ("%f", &consumo);
        printf ("Codigo do consumidor\n1- Residencial\n2-Comercial\n3-Industrial: ");
        scanf ("%d", &codigo);
        if (codigo == 1 || codigo == 2 || codigo == 3)
        {
            if (cont == 1) {maior = consumo; menor = consumo;}
            else 
            {
                if (consumo > maior) {maior = consumo;}
                if (consumo < menor) {menor = consumo;}
            }
            soma = soma + consumo;
            if (codigo == 1) {soma1 = soma1 + consumo;}
            if (codigo == 2) {soma2 = soma2 + consumo;}
            if (codigo == 3) {soma3 = soma3 + consumo;}
            cont = cont + 1;
        } else {printf ("Codigo Invalido\n");}
    }
    media = soma/hab;
    printf ("\nMaior consumo: %.2f", maior);
    printf ("\nMenor consumo: %.2f", menor);
    printf ("\nMedia = %.2f", media);
    printf ("\nConsumo total RESIDENCIAL: %.2f", soma1);
    printf ("\nConsumo total COMERCIAL: %.2f", soma2);
    printf ("\nConsumo total INDUSTRIAL: %.2f", soma3);
    
    return 0;
}