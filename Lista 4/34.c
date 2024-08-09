/*Fac ̧a um programa para ler 10 numeros DIFERENTES a serem armazenados em um  ́
vetor. Os dados deverao ser armazenados no vetor na ordem que forem sendo lidos,  ̃
sendo que caso o usuario digite um n  ́ umero que j  ́ a foi digitado anteriormente, o programa  ́
devera pedir para ele digitar outro n  ́ umero. Note que cada valor digitado pelo usu  ́ ario  ́
deve ser pesquisado no vetor, verificando se ele existe entre os numeros que j  ́ a foram  ́
fornecidos. Exibir na tela o vetor final que foi digitado. ́ */

#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int vetor [10]={0};
    int num, cont;
    
    printf("Informe 10 valores\nObs.: Não Repetir");
    
    printf ("\n1)");
    scanf ("%d", &vetor[0]);
    
    for (int i=1; i<10; i++) //Preencher Vetor
    {
        int num;
        printf ("%d)", i+1);
        scanf ("%d", &num);
        int j=0;
        cont=0;
        while (j<i) {
            if (num != vetor[j]) {
                cont = cont+1;
                j=j+1;
            }
            else {
                j=j+1;
                i=i-1;
                printf ("Nao Repetir!\n");
            }
        }
        if (cont == i) {
            vetor [i] = num;
        }
    }
    
    for (int i=0; i<10; i++){
        printf ("%d ", vetor[i]);
    }
    
    return 0;
}
