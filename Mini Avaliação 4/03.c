/* 3) A taxa de natalidade e a taxa de mortalidade são indicadores estatísticos de fundamental importância por ajudar a 
compreender aquilo que os especialistas chamam de dinâmica populacional e a entender sua relação com variáveis que influenciam 
o desenvolvimento, como qualidade de vida, migrações, fatores socioeconômicos e localização. 
Sabendo disso, crie um programa que calcule os dois indicadores utilizando o comando switch.
Observação : A taxa de natalidade é calculada pela seguinte fórmula: 
taxa de natalidade = (número de crianças nascidas x 1000) / número de habitantes; 
Enquanto que a taxa de mortalidade = (números de óbitos x 1000) /número de habitantes.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int taxa;
    float habitantes;
    printf ("Voce deseja calcular a taxa de natalidade (1) ou a taxa de mortalidade (2): ");
    scanf("%d", &taxa);
    
    switch (taxa) 
    {
    case 1:
        float nascimentos;
        printf ("Taxa de Nataliade \n");
        printf ("Insira a quantidade de habitantes: ");
        scanf ("%f", &habitantes);
        printf ("Insira a quantidade de crianças nascidas: ");
        scanf ("%f", &nascimentos);
        float txnatal = ((nascimentos*1000)/habitantes);
        printf ("A taxa de natalidade e igual a %.2f", txnatal);
        break;
    case 2:
        float obitos;
        printf ("Taxa de Mortalidade\n");
        printf ("Insira a quantidade de habitantes: ");
        scanf ("%f", &habitantes);
        printf ("Insira a quantidade de obitos: ");
        scanf ("%f", &obitos);
        float txmortal = ((obitos*1000)/habitantes);
        printf ("A taxa de natalidade e igual a %.2f", txmortal);
        break;
        
    default:
        printf ("Opção Invalida");
        break;
    }
    
return 0;
}