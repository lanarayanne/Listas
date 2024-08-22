/*Fac¸a um programa para determinar a proxima jogada em um Jogo da Velha. Assumir que ´
o tabuleiro e representado por uma matriz de 3 x 3, onde cada posic¸ ´ ao representa uma ˜
das casas do tabuleiro. A matriz pode conter os seguintes valores -1, 0, 1 representando
respectivamente uma casa contendo uma pec¸a minha (-1), uma casa vazia do tabuleiro
(0), e uma casa contendo uma pec¸a do meu oponente (1).
Exemplo
-1 1 1
-1 -1 0
0 1 0 */

#include<stdio.h>
#include<stdlib.h>

int main(){
    int tabuleiro[3][3]={0};
    int jogada=0;
    int posicao=1;
    int escolha;
    int cont;
    int resultado = 0;
    
    
    printf("\nJogo da Velha!");
    printf("\nConsiderando as posicoes mostradas na imagem, escolha onde deseja jogar");
    printf("\nNota:\n( 0) - Espaço vazio\n(-1) - Oponente\n( 1) - Voce\n\n");
    
    // imprimir posicoes
    for (int i=0; i<3;i++){
        
        for (int j=0;j<3;j++){
            printf(" %d |", posicao);
            posicao++;
        }
        printf("\n");
    }
    
    //JOGO
    
    // scanf(" %d", &escolha);
    // jogada++;
    
    while (jogada < 9 || resultado != 0){
        
        while (jogada %2 == 0){
            
            printf("\nSua vez, digite a posicao: ");
            scanf("%d", &escolha);
            
            if (escolha == 1) {
                if (tabuleiro[0][0]==0){
                    tabuleiro[0][0]=-1;
                    jogada ++;
                    printf("\n");
                    for (int i=0; i<3;i++){
                        for (int j=0;j<3;j++){
                            printf("\t%d\t|", tabuleiro[i][j]);
                        }
                        printf("\n");
                    }
                }
                else{
                    printf("\nEssa casa esta preenchida, tente novamente!");
                    scanf("%d", &escolha);
                }
            }
                
            if (escolha == 2){
                if (tabuleiro[0][1]==0){
                    tabuleiro[0][1]=-1;
                    jogada ++;
                    printf("\n");
                    for (int i=0; i<3;i++){
                        for (int j=0;j<3;j++){
                            printf("\t%d\t|", tabuleiro[i][j]);
                        }
                        printf("\n");
                    }
                }
                else{
                    printf("\nEssa casa esta preenchida, tente novamente!");
                    scanf("%d", &escolha);
                }
            }
                
            if (escolha == 3){
                if (tabuleiro[0][2]==0){
                    tabuleiro[0][2]=-1;
                    jogada ++;
                    printf("\n");
                    for (int i=0; i<3;i++){
                        for (int j=0;j<3;j++){
                            printf("\t%d\t|", tabuleiro[i][j]);
                        }
                        printf("\n");
                    }
                }
                else{
                    printf("\nEssa casa esta preenchida, tente novamente!");
                    scanf("%d", &escolha);
                }
            }
                
            if (escolha == 4){
                if (tabuleiro[1][0]==0){
                    tabuleiro[1][0]=-1;
                    jogada ++;
                    printf("\n");
                    for (int i=0; i<3;i++){
                        for (int j=0;j<3;j++){
                            printf("\t%d\t|", tabuleiro[i][j]);
                        }
                        printf("\n");
                    }
                }
                else{
                    printf("\nEssa casa esta preenchida, tente novamente!");
                    scanf("%d", &escolha);
                }
            }
                
            if (escolha == 5){
                if (tabuleiro[1][1]==0){
                    tabuleiro[1][1]=-1;
                    jogada ++;
                    printf("\n");
                    for (int i=0; i<3;i++){
                        for (int j=0;j<3;j++){
                            printf("\t%d\t|", tabuleiro[i][j]);
                        }
                        printf("\n");
                    }
                }
                else{
                    printf("\nEssa casa esta preenchida, tente novamente!");
                    scanf("%d", &escolha);
                }
            }
                
            if (escolha == 6){
                if (tabuleiro[1][2]==0){
                    tabuleiro[1][2]=-1;
                    jogada ++;
                    printf("\n");
                    for (int i=0; i<3;i++){
                        for (int j=0;j<3;j++){
                            printf("\t%d\t|", tabuleiro[i][j]);
                        }
                        printf("\n");
                    }
                }
                else{
                    printf("\nEssa casa esta preenchida, tente novamente!");
                    scanf("%d", &escolha);
                }
            }
                
            if (escolha == 7){
                if (tabuleiro[2][0]==0){
                    tabuleiro[2][0]=-1;
                    jogada ++;
                    printf("\n");
                    for (int i=0; i<3;i++){
                        for (int j=0;j<3;j++){
                            printf("\t%d\t|", tabuleiro[i][j]);
                        }
                        printf("\n");
                    }
                }
                else{
                    printf("\nEssa casa esta preenchida, tente novamente!");
                    scanf("%d", &escolha);
                }
            }
                
            if (escolha == 8){
                if (tabuleiro[2][1]==0){
                    tabuleiro[2][1]=-1;
                    jogada ++;
                    printf("\n");
                    for (int i=0; i<3;i++){
                        for (int j=0;j<3;j++){
                            printf("\t%d\t|", tabuleiro[i][j]);
                        }
                        printf("\n");
                    }
                }
                else{
                    printf("\nEssa casa esta preenchida, tente novamente!");
                    scanf("%d", &escolha);
                }
            }
                
            if (escolha == 9){
                if (tabuleiro[2][2]==0){
                    tabuleiro[2][2]=-1;
                    jogada ++;
                    printf("\n");
                    for (int i=0; i<3;i++){
                        for (int j=0;j<3;j++){
                            printf("\t%d\t|", tabuleiro[i][j]);
                        }
                        printf("\n");
                    }
                }
                else{
                    printf("\nEssa casa esta preenchida, tente novamente!");
                    scanf("%d", &escolha);
                }
            }
            
            if(escolha<1 || escolha >9){
                printf("Posicao invalida! Tente Novamente: ");
            }
        }    
        
        if (jogada %2 !=0) { //computador
        
        //linha
        printf("\nComputador:\n");
        int tentativa = 0;
        while (tentativa == 0) {
        
            //linha - para ganhar
            
            for (int i=0; i<3; i++){
                    if (tabuleiro[i][0]==1 && tabuleiro[i][1]==1 && tabuleiro[i][2]==0){
                    tabuleiro[i][2]=1;
                    jogada++;
                    tentativa=1;
                    printf("\n");
                    for (int i=0; i<3;i++){
                        for (int j=0;j<3;j++){
                            printf("\t%d\t|", tabuleiro[i][j]);
                        }
                        printf("\n");
                    }
                    break;
                }
                
            }
            if (tentativa==1){
                break;
            }
            for (int i=0; i<3; i++){
                    if (tabuleiro[i][0]==1 && tabuleiro[i][2]==1 && tabuleiro[i][1]==0){
                    tabuleiro[i][1]=1;
                    jogada++;
                    tentativa=1;
                    printf("\n");
                    for (int i=0; i<3;i++){
                        for (int j=0;j<3;j++){
                            printf("\t%d\t|", tabuleiro[i][j]);
                        }
                        printf("\n");
                    }
                    break;
                }    
            }
            if (tentativa==1){
                break;
            }
            for (int i=0; i<3; i++){
                    if (tabuleiro[i][1]==1 && tabuleiro[i][2]==1 && tabuleiro[i][0]==0){
                    tabuleiro[i][0]=1;
                    jogada++;
                    tentativa=1;
                    printf("\n");
                    for (int i=0; i<3;i++){
                        for (int j=0;j<3;j++){
                            printf("\t%d\t|", tabuleiro[i][j]);
                        }
                        printf("\n");
                    }
                    break;
                }    
            }
            
            //coluna
            if (tentativa==1){
                break;
            }
            for (int i=0; i<3; i++){
                if (tabuleiro[0][i]==1 && tabuleiro[1][i]==1 && tabuleiro[2][i]==0){
                tabuleiro[2][i]=1;
                jogada++;
                tentativa=1;
                printf("\n");
                for (int i=0; i<3;i++){
                        for (int j=0;j<3;j++){
                            printf("\t%d\t|", tabuleiro[i][j]);
                        }
                        printf("\n");
                    }
                break;
                }
            }
            if (tentativa==1){
                break;
            }
            for (int i=0; i<3; i++){
                if (tabuleiro[0][i]==1 && tabuleiro[2][i]==1 && tabuleiro[1][i]==0){
                tabuleiro[1][i]=1;
                jogada++;
                tentativa=1;
                printf("\n");
                for (int i=0; i<3;i++){
                        for (int j=0;j<3;j++){
                            printf("\t%d\t|", tabuleiro[i][j]);
                        }
                        printf("\n");
                    }
                break;
                }
            }
            if (tentativa==1){
                break;
            }
            for (int i=0; i<3; i++){
                if (tabuleiro[1][i]==1 && tabuleiro[2][i]==1 && tabuleiro[0][i]==0){
                tabuleiro[0][i]=1;
                jogada++;
                tentativa=1;
                printf("\n");
                for (int i=0; i<3;i++){
                        for (int j=0;j<3;j++){
                            printf("\t%d\t|", tabuleiro[i][j]);
                        }
                        printf("\n");
                    }
                break;
                }
            }
            if (tentativa==1){
                break;
            }
            //diagonal
            
            if (tabuleiro[0][0]==1 && tabuleiro[1][1]==1 && tabuleiro[2][2]==0){
                tabuleiro[2][2]=1;
                jogada++;
                tentativa=1;
                printf("\n");
                for (int i=0; i<3;i++){
                        for (int j=0;j<3;j++){
                            printf("\t%d\t|", tabuleiro[i][j]);
                        }
                        printf("\n");
                    }
                break;
            }
            if (tentativa==1){
                break;
            }
            if (tabuleiro[0][2]==1 && tabuleiro[1][1]==1 && tabuleiro[2][0]==0){
                tabuleiro[2][0]=1;
                tentativa=1;
                jogada++;
                printf("\n");
                for (int i=0; i<3;i++){
                        for (int j=0;j<3;j++){
                            printf("\t%d\t|", tabuleiro[i][j]);
                        }
                        printf("\n");
                    }
                break;
            }
            if (tentativa==1){
                break;
            }
            if (tabuleiro[0][2]==1 && tabuleiro[1][1]==1 && tabuleiro[2][0]==0){
                tabuleiro[2][0]=1;
                jogada++;
                tentativa=1;
                printf("\n");
                for (int i=0; i<3;i++){
                        for (int j=0;j<3;j++){
                            printf("\t%d\t|", tabuleiro[i][j]);
                        }
                        printf("\n");
                    }
                break;
            }
            if (tentativa==1){
                break;
            }
            if (tabuleiro[2][0]==1 && tabuleiro[1][1]==1 && tabuleiro[0][2]==0){
                tabuleiro[0][2]=1;
                jogada++;
                tentativa=1;
                printf("\n");
                for (int i=0; i<3;i++){
                        for (int j=0;j<3;j++){
                            printf("\t%d\t|", tabuleiro[i][j]);
                        }
                        printf("\n");
                    }
                break;
            }
            if (tentativa==1){
                break;
            }
            
            //linha    
            for (int i=0; i<3; i++){
                    if (tabuleiro[i][0]==-1 && tabuleiro[i][1]==-1 && tabuleiro[i][2]==0){
                    tabuleiro[i][2]=1;
                    jogada++;
                    tentativa=1;
                    printf("\n");
                    for (int i=0; i<3;i++){
                        for (int j=0;j<3;j++){
                            printf("\t%d\t|", tabuleiro[i][j]);
                        }
                        printf("\n");
                    }
                    break;
                }    
            }
            if (tentativa==1){
                break;
            }
            for (int i=0; i<3; i++){
                    if (tabuleiro[i][0]==-1 && tabuleiro[i][2]==-1 && tabuleiro[i][1]==0){
                    tabuleiro[i][1]=1;
                    jogada++;
                    tentativa=1;
                    printf("\n");
                    for (int i=0; i<3;i++){
                        for (int j=0;j<3;j++){
                            printf("\t%d\t|", tabuleiro[i][j]);
                        }
                        printf("\n");
                    }
                    break;
                }    
            }
            if (tentativa==1){
                break;
            }
            for (int i=0; i<3; i++){
                    if (tabuleiro[i][1]==-1 && tabuleiro[i][2]==-1 && tabuleiro[i][0]==0){
                    tabuleiro[i][0]=1;
                    jogada++;
                    tentativa=1;
                    printf("\n");
                    for (int i=0; i<3;i++){
                        for (int j=0;j<3;j++){
                            printf("\t%d\t|", tabuleiro[i][j]);
                        }
                        printf("\n");
                    }
                    break;
                }    
            }
            if (tentativa==1){
                break;
            }
            //coluna
            
            for (int i=0; i<3; i++){
                if (tabuleiro[0][i]==-1 && tabuleiro[1][i]==-1 && tabuleiro[2][i]==0){
                tabuleiro[2][i]=1;
                jogada++;
                tentativa=1;
                printf("\n");
                for (int i=0; i<3;i++){
                        for (int j=0;j<3;j++){
                            printf("\t%d\t|", tabuleiro[i][j]);
                        }
                        printf("\n");
                    }
                break;
                }
            }
            if (tentativa==1){
                break;
            }if (tentativa==1){
                break;
            }
            for (int i=0; i<3; i++){
                if (tabuleiro[0][i]==-1 && tabuleiro[2][i]==-1 && tabuleiro[1][i]==0){
                tabuleiro[1][i]=1;
                jogada++;
                tentativa=1;
                printf("\n");
                for (int i=0; i<3;i++){
                        for (int j=0;j<3;j++){
                            printf("\t%d\t|", tabuleiro[i][j]);
                        }
                        printf("\n");
                    }
                break;
                }
            }
            if (tentativa==1){
                break;
            }
            for (int i=0; i<3; i++){
                if (tabuleiro[1][i]==-1 && tabuleiro[2][i]==-1 && tabuleiro[0][i]==0){
                tabuleiro[0][i]=1;
                jogada++;
                tentativa=1;
                printf("\n");
                for (int i=0; i<3;i++){
                        for (int j=0;j<3;j++){
                            printf("\t%d\t|", tabuleiro[i][j]);
                        }
                        printf("\n");
                    }
                break;
                }
            }
            if (tentativa==1){
                break;
            }
            //diagonal
            
            if (tabuleiro[0][0]==-1 && tabuleiro[1][1]==-1 && tabuleiro[2][2]==0){
                tabuleiro[2][2]=1;
                jogada++;
                tentativa=1;
                printf("\n");
                for (int i=0; i<3;i++){
                        for (int j=0;j<3;j++){
                            printf("\t%d\t|", tabuleiro[i][j]);
                        }
                        printf("\n");
                    }
                break;
            }
            if (tentativa==1){
                break;
            }
            if (tabuleiro[2][2]==-1 && tabuleiro[1][1]==-1 && tabuleiro[0][0]==0){
                tabuleiro[0][0]=1;
                jogada++;
                tentativa=1;
                printf("\n");
                for (int i=0; i<3;i++){
                        for (int j=0;j<3;j++){
                            printf("\t%d\t|", tabuleiro[i][j]);
                        }
                        printf("\n");
                    }
                break;
            }
            if (tentativa==1){
                break;
            }
            if (tabuleiro[0][2]==-1 && tabuleiro[1][1]==-1 && tabuleiro[2][0]==0){
                tabuleiro[2][0]=1;
                jogada++;
                tentativa=1;
                printf("\n");
                for (int i=0; i<3;i++){
                        for (int j=0;j<3;j++){
                            printf("\t%d\t|", tabuleiro[i][j]);
                        }
                        printf("\n");
                    }
                break;
            }
            if (tentativa==1){
                break;
            }
            if (tabuleiro[2][0]==-1 && tabuleiro[1][1]==-1 && tabuleiro[0][2]==0){
                tabuleiro[0][2]=1;
                jogada++;
                tentativa=1;
                printf("\n");
                for (int i=0; i<3;i++){
                        for (int j=0;j<3;j++){
                            printf("\t%d\t|", tabuleiro[i][j]);
                        }
                        printf("\n");
                    }
                break;
            }
            if (tentativa==1){
                break;
            }
            
            //se nada
            if (tentativa==0){
                for (int i=0; i<3;i++){
                    for (int j=0;j<3;j++){
                        if (tabuleiro[i][j]==0){
                            tabuleiro[i][j]=1;
                            jogada++;
                            tentativa = 1;
                        }
                        if (tentativa==1){
                            break;
                        }
                    }
                    if (tentativa==1){
                            break;
                        }
                }
                
                printf("\n");
                for (int i=0; i<3;i++){
                    for (int j=0;j<3;j++){
                        printf("\t%d\t|", tabuleiro[i][j]);
                    }
                    printf("\n");
                }
                
                break;
                                
            
            }
        }
        }
        
        //Teste Perder
        //linha
        for (int i =0;i<3;i++){
            for (int j=0; j<3;j++){
                if (tabuleiro[i][0] == 1 && tabuleiro[i][1] == 1 && tabuleiro[i][2]==1){
                    resultado=1;
                }
                if (resultado !=0){
                        break;
                }
            }
            if (resultado !=0){
                        break;
            }
        }
        if (resultado !=0){
                        break;
            }
        // coluna
        for (int i =0;i<3;i++){
            for (int j=0; j<3;j++){
                if (tabuleiro[0][j] == 1 && tabuleiro[1][j] == 1 && tabuleiro[2][j]==1){
                    resultado=1;
                }
                if (resultado !=0){
                    break;
                }
            }
            if (resultado !=0){
                break;
            }
        }
        if (resultado !=0){
            break;
        }
        //diagonal
        
        if (tabuleiro[0][0] == 1 && tabuleiro[1][1] == 1 && tabuleiro[2][2]==1){
            resultado=1;
        }
        if (resultado !=0){
            break;
        }
        
        if (tabuleiro[0][2] == 1 && tabuleiro[1][1] == 1 && tabuleiro[2][0]==1){
            resultado=1;
        }
        if (resultado !=0){
            break;
        }
        
        //ganhar
        
        for (int i=0;i<3;i++){
            for (int j=0; j<3;j++){
                if (tabuleiro[i][0] == -1 && tabuleiro[i][1] == -1 && tabuleiro[i][2]==-1){
                    resultado=2;
                }
                if (resultado !=0){
                        break;
                }
            }
            if (resultado !=0){
                        break;
            }
        }
        if (resultado !=0){
                        break;
            }
        // coluna
        for (int i=0;i<3;i++){
            for (int j=0; j<3;j++){
                if (tabuleiro[0][j] == -1 && tabuleiro[1][j] == -1 && tabuleiro[2][j]==-1){
                    resultado=2;
                }
                if (resultado !=0){
                    break;
                }
            }
            if (resultado !=0){
                break;
            }
        }
        if (resultado !=0){
            break;
        }
        //diagonal
        
        if (tabuleiro[0][0] == -1 && tabuleiro[1][1] == -1 && tabuleiro[2][2]==-1){
            resultado=2;
        }
        if (resultado !=0){
            break;
        }
        
        if (tabuleiro[0][2] == -1 && tabuleiro[1][1] == -1 && tabuleiro[2][0]==-1){
            resultado=1;
        }
        if (resultado !=0){
            break;
        }
        
    }
    
    switch (resultado){
        case 0:
        printf("\nDeu Velha");
        break;
        
        case 1:
        printf("\nVoce Perdeu :(");
        break;
        
        case 2:
        printf("\nParabens! Voce ganhou :)");
        break;
        
    }
   
    return 0;
}