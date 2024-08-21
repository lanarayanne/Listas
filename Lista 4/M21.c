/*21) Fac¸a um programa que leia duas matrizes 2 x 2 com valores reais. Oferec¸a ao usuario ´
um menu de opc¸oes: ˜
(a) somar as duas matrizes
(b) subtrair a primeira matriz da segunda
(c) adicionar uma constante as duas matrizes `
(d) imprimir as matrizes */

#include <stdio.h>

int main()
{
    float matriz_1 [2][2]={0};
    float matriz_2 [2][2]={0};
    float matriz_soma [2][2]={0};
    float matriz_subtracao [2][2]={0};
    float matriz_contante_1[2][2]={0};
    float matriz_contante_2[2][2]={0};
    float constante;
    char opcao;
    
    printf("Preencha a primeira matriz 2x2:");
    
    for (int i=0;i<2;i++){
        for (int j=0; j<2;j++){
            scanf("%f", &matriz_1[i][j]);
        }
    }
    
    printf("Preencha a segunda matriz 2x2:");
    
    for (int i=0;i<2;i++){
        for (int j=0; j<2;j++){
            scanf("%f", &matriz_2[i][j]);
        }
    }
    
    printf("\nEscolha uma opcao:");
    printf("\n(a) somar as duas matrizes\n(b) subtrair a primeira matriz da segunda\n(c) adicionar uma constante as duas matrizes\n(d) imprimir as matrizes: ");
    scanf(" %c", &opcao);
    
    while (opcao!=65 && opcao!=66 && opcao!=67 && opcao!=68 && opcao!=97 && opcao!=98 && opcao!=99 && opcao!=100){
        printf("\nOpcao Invalida! Tente novamente:");
        scanf(" %c ", &opcao);
    }
  
    switch (opcao){
        case 65:
        for (int i=0;i<2;i++){
            for (int j=0; j<2;j++){
                matriz_soma[i][j]=matriz_1[i][j] + matriz_2[i][j];
            }
        }
        printf("\nOpcao A:\n");
        for (int i=0;i<2;i++){
            for (int j=0; j<2;j++){
                printf("%.2f ", matriz_soma[i][j]);
            }
            printf("\n");
        }
        break;
        
        case 66:
        for (int i=0;i<2;i++){
            for (int j=0; j<2;j++){
                matriz_subtracao[i][j]= matriz_2[i][j] - matriz_1[i][j];
            }
        }
        
        printf("\nOpcao B:\n");
        
        for (int i=0;i<2;i++){
            for (int j=0; j<2;j++){
                printf("%.2f ", matriz_subtracao[i][j]);
            }
            printf("\n");
        }
        break;
        
        case 67:
        printf("\nInforme o valor da constante a ser adicionada:");
        scanf("%f", &constante);
        for (int i=0;i<2;i++){
            for (int j=0; j<2;j++){
                matriz_contante_1[i][j]= matriz_1[i][j] +constante;
                matriz_contante_2[i][j]= matriz_2[i][j] +constante;
            }
        }
        
        printf("\nOpcao C:\n");
        
        for (int i=0;i<2;i++){
            for (int j=0; j<2;j++){
                printf("%.2f ", matriz_contante_1[i][j]);
            }
            printf("\n");
        }
        
        printf("\n");
        
        for (int i=0;i<2;i++){
            for (int j=0; j<2;j++){
                printf("%.2f ", matriz_contante_2[i][j]);
            }
            printf("\n");
        }
        break;
        
        case 68:
        
        printf("\nOpcao D:\n");
        
        for (int i=0;i<2;i++){
            for (int j=0; j<2;j++){
                printf("%.2f ", matriz_1[i][j]);
            }
            printf("\n");
        }
        
        printf("\n");
        
        for (int i=0;i<2;i++){
            for (int j=0; j<2;j++){
                printf("%.2f ", matriz_2[i][j]);
            }
            printf("\n");
        }
        break;
        
        case 97:
        for (int i=0;i<2;i++){
            for (int j=0; j<2;j++){
                matriz_soma[i][j]=matriz_1[i][j] + matriz_2[i][j];
            }
        }
        printf("\nOpcao A:\n");
        for (int i=0;i<2;i++){
            for (int j=0; j<2;j++){
                printf("%.2f ", matriz_soma[i][j]);
            }
            printf("\n");
        }
        break;
        
        case 98:
        for (int i=0;i<2;i++){
            for (int j=0; j<2;j++){
                matriz_subtracao[i][j]= matriz_2[i][j] - matriz_1[i][j];
            }
        }
        
        printf("\nOpcao B:\n");
        
        for (int i=0;i<2;i++){
            for (int j=0; j<2;j++){
                printf("%.2f ", matriz_subtracao[i][j]);
            }
            printf("\n");
        }
        break;
        
        case 99:
        printf("\nInforme o valor da constante a ser adicionada:");
        scanf("%f", &constante);
        for (int i=0;i<2;i++){
            for (int j=0; j<2;j++){
                matriz_contante_1[i][j]= matriz_1[i][j] +constante;
                matriz_contante_2[i][j]= matriz_2[i][j] +constante;
            }
        }
        
        printf("\nOpcao C:\n");
        
        for (int i=0;i<2;i++){
            for (int j=0; j<2;j++){
                printf("%.2f ", matriz_contante_1[i][j]);
            }
            printf("\n");
        }
        
        printf("\n");
        
        for (int i=0;i<2;i++){
            for (int j=0; j<2;j++){
                printf("%.2f ", matriz_contante_2[i][j]);
            }
            printf("\n");
        }
        break;
        
        case 100:
        
        printf("\nOpcao D:\n");
        
        for (int i=0;i<2;i++){
            for (int j=0; j<2;j++){
                printf("%.2f ", matriz_1[i][j]);
            }
            printf("\n");
        }
        
        printf("\n");
        
        for (int i=0;i<2;i++){
            for (int j=0; j<2;j++){
                printf("%.2f ", matriz_2[i][j]);
            }
            printf("\n");
        }
        break;
        
    }
    
    
    
    return 0;
}
