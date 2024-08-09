/*́ 35. Fac ̧a um programa que leia dois numeros  ́ a e b (positivos menores que 10000) e:
• Crie um vetor onde cada posic ̧ao ̃ e um algarismo do n  ́ umero. A primeira posic ̧  ́ ao ̃ e ́
o algarismo menos significativo;
• Crie um vetor que seja a soma de a e b, mas fac ̧a-o usando apenas os vetores
constru ́ıdos anteriormente. */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    
    int vetora [5]={0};
    int vetorb [5]={0};
    int soma [5] = {0};
    int numeroa=95, numerob=95, tamanhoa, tamanhob, divisor=1;
    float copianuma, copianumb, potencia;
    
    
    printf("Informe um valor\nObs.: Menor que 10.000\n");
    scanf ("%d", &numeroa);
    
    copianuma=numeroa;
    
    printf("Informe um valor\nObs.: Menor que 10.000\n");
    scanf ("%d", &numerob);
    
    copianumb=numerob;

    
    while (copianuma <= 10000 && numeroa >= divisor){
        tamanhoa = tamanhoa+1;
        copianuma=copianuma/divisor;
        divisor = divisor*10;
    }
    
    divisor=1;
    
    while (copianumb <= 10000 && numerob >= divisor){
        tamanhob = tamanhob+1;
        copianumb=copianumb/divisor;
        divisor = divisor*10;
    }
    
    int restoa=numeroa;
    int i = 0;
    
    while (tamanhoa>0){
        if (i >= 5- tamanhoa){
            potencia = pow(10,tamanhoa-1);
            vetora[i]=restoa/(int)potencia;
            restoa = restoa%(int)potencia;
            tamanhoa = tamanhoa-1;
            i++;
        }
        else {
            i++;
        }
        
    }
    
    int restob=numerob;
    i=0;
    
    while (tamanhob>0){
        if (i >= 5-tamanhob){
            potencia = pow(10,tamanhob-1);
            vetorb[i]=restob/(int)potencia;
            restob = restob%(int)potencia;
            tamanhob = tamanhob-1;
            i++;
        }
        else {
            i++;
        }
        
    }
    
    
    printf ("\nVetor a:\t");
    for (int i =0; i<5; i++){
        printf ("%d ", vetora[i]);
    }
    
    printf ("\nVetor b:\t");
    for (int i =0; i<5; i++){
        printf ("%d ", vetorb[i]);
    }
    
    for (int i=4; i>=0; i--){
        soma[i] = vetora[i]+vetorb[i]+soma[i];
        if (soma[i] >=10){
            soma[i-1] = soma[i]/10;
            soma[i] = soma[i]%10;
        }
    }
    
    printf ("\nSoma:\t\t");
    for (int i =0; i<5; i++){
        printf ("%d ", soma[i]);
    }
    
    return 0;
}