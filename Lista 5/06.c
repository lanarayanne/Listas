/**
. Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25, imprime o nome da
 pessoa e a palavra “ACEITA”, caso contr´ ario imprimir “N˜ AO ACEITA”.
**/

#include <stdio.h>


int main()
{
    char nome [50];
    char sexo='x';
    int idade;
    int i=0;
    
    printf("Nome: ");
    scanf("%50[^\n]", nome);
    
    printf("Sexo (F) Feminino (M) Masculino: ");
    scanf(" %c", &sexo);
    
    while (sexo != 'f' && sexo != 'F' && sexo != 'm' && sexo != 'M'){
        printf("Opcao Invalida\nTente novamente: ");
        scanf(" %c", &sexo);
    }
    
    printf("Idade: ");
    scanf("%d", &idade);
    
    if((sexo == 'f' || sexo == 'F') && idade<25){
        while ( nome[i] != '\0'){
            printf("%c", nome[i]);
            i++;
        }
        printf("\nACEITA!");
    } 
    else{
         if(sexo == 'm' || sexo == 'M'){
             printf("\nNAO ACEITO!");
         }
         
         else {
             printf("\nNAO ACEITA!");
         }
        
    }
    
    
    return 0;
}