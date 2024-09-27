/**

    Ler o nome e o valor de uma determinada mercadoria de uma loja. Sabendo que o
 desconto para pagamento ` a vista ´ e de 10% sobre o valor total, calcular o valor a ser
 pago ` a vista. Escrever o nome da mercadoria, o valor total, o valor do desconto e o valor
 a ser pago ` a vista.
 
 
**/

#include <stdio.h>

int main()
{
	char mercadoria[10000][50];
	char nada;
	float valor[10000]={0};
	float desconto_vista[10000]={0};
	float total_vista[10000]={0};
	int fechar=0;
	int i=0, cont=0;
	
	printf("Valor negativo para encerrar\n");
	
	while (!fechar){
	    printf("\nMercadoria: ");
	    scanf("%10000[^\n]", mercadoria[i]);
	    printf("Valor: R$ ");
	    scanf("%f", &valor[i]);
	    scanf("%c", &nada);
	    if(valor[i] < 0){
	        fechar = 1;
	    }
	    else{
	        cont++;
	    }
	    i++;
	}
	
	for(i=0; i<cont; i++){
	    desconto_vista[i] = 0.1 * valor[i];
	    total_vista[i] = valor[i] - desconto_vista[i];
	}
	
	i=0;

	while (i<cont) {
	    printf("\n-----------------------");
	    printf("\nMercadoria: %s", mercadoria[i]);
	    printf("\nValor:\tR$ %.2f", valor[i]);
	    printf("\nDesconto:\tR$ %.2f", desconto_vista[i]);
	    printf("\nTotal:\tR$ %.2f", total_vista[i]);
	    printf("\n-----------------------");
	    i++;
	}
	
	return 0;
}