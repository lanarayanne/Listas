/*2)  (2,0 pontos) Escreva um programa que, dada a idade de um atleta, classifique-o em uma das seguintes categorias:

Categoria -----Idade
Infantil A ------5 a 7 
Infantil B ------8 a 10
Juveni A ------11 a 13
Junevil B------14 a 17
Adultos  ------- maiores de 18 anos 
OBS: Utilize cláusula if aninhados. .*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    
    printf("Informe a idade do atleta: ");
    scanf("%d", &idade);
    
    if (idade >=5 && idade <=120){
        
        if (idade >= 5 && idade <=7){
        printf("\nCategoria: Infantil A");
        }
        else if(idade >= 8 && idade <=10){
            printf("\nCategoria: Infantil B");
        }
        else if (idade >= 11 && idade <=13){
            printf("\nCategoria: Juvenil A");
        }
        else if (idade >= 14 && idade <=17){
            printf("\nCategoria: Juvenil B");
        }
        else{
            printf("\nCategoria: Adulto");
        }
    }
    
    else if(idade >=0 && idade <5){
        printf("\nIdade Insuficiente: Sem categoria");
    }
    
    else {
        printf("\nIdade Invalida");
    }
    

    return 0;
}