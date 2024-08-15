/*38  Pec ̧a ao usuario para digitar dez valoress e ordene por ordem crescente esses  ́
valores, guardando-os num vetor. Ordene o valor assim que ele for digitado. Mostre ao
final na tela os valores em ordem.*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    
    float vetor [10] = {0};
    float maior;
    int cont=0;
    float num;
    
    printf ("Informe 10 valores:\n1) ");
    scanf("%f", &vetor[0]);
    maior=vetor[0]; //o primeiro numero informado e tambem o maior
    
    
    for (int i=0; i<10;i++){ //preencher o vetor todo com o primeiro numero para nao ficar com numeros nao informados pelo usuario
        vetor [i]=vetor[0];
        printf ("%.f ", vetor[i]);
    }
    
    printf ("\n");
    
    for (int i=1; i<10;i++){ //cada vez que rodar pede um novo valor 
        printf ("%d) ", i+1);
        scanf("%f", &num);
        
        if (num>maior){ // Se o numero for maior que o primeiro, ele não vai ser inserido, entao aqui troca todos os proximos pro numero maior
            maior = num;
            for (int m=i; m<10;m++){
                vetor[m]=maior;
            }
        }
        
        for (int j=0; j<i; j++){ //percorrer o vetor até que encontre um numero maior do que foi inserido
            if (num>=vetor[j]){
                cont++;
                continue;
            }
            else{ //quando acha o numero, ele move todos os numeros depois uma posicao depois, criando espaço pro numero novo
                for (int k=9; k>cont; k--){
                vetor[k]=vetor[k-1];
                }
                vetor[j]=num; //coloca o novo numero no espaço que foi criado
            }
            break;
        }
        cont=0;
        for (int l=0; l<10; l++){ //imprime o vetor todas as vezes que o usuario informa um numero - pra mostrar que ordena cada vez que o numero e inserido
            printf("%.f ", vetor[l]);
        }
        printf ("\nVetor ordenado:");
    }
    printf("\n");
    
    for (int i=0; i<10;i++){
            printf("%.f ", vetor[i]);
        }
    
    return 0;
}