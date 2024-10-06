/*  Projeto  */

/*
Opcao 2: Onibus
-Numero do carro:
-Empresa:
-Placa:
-Cor:
-Linha:
*/

#include <stdio.h>
#include <stdlib.h>

void imprimir_linha() {
	printf ("----------------------------------\n");
}

char letra_maiuscula(char letra) {
	if(letra >= 97 && letra <=122) {
		letra=letra-32;
	}
	return letra;
} //Para deixar a placa em maiusculo

char maiusculo_e_minusculo(char letra, int posicao) {
	if (posicao == 0) {
		if(letra >= 97 && letra <=122) {
			letra=letra-32;
		}
	}
	else {
		if(letra >= 65 && letra <=90) {
			letra=letra+32;
		}
	}
	return letra;
}

struct Onibus {
	char placa[7];
	int num_carro;
	char empresa[50];
	char cor[10];
	int linha;
};

void menu() {

	imprimir_linha();
	printf("(1) Adicionar Item\n"); //ok
	printf("(2) Mostrar itens cadastrados\n"); //ok
	printf("(3) Atualizar item cadastrado\n");
	printf("(4) Excluir item cadastrado\n");
	printf("(5) Sair\n"); //ok
	imprimir_linha();
	printf("Escolha uma opcao: ");
}

struct Onibus adicionar() {
	int i;

	printf("\nAdicionar Item\n");
	struct Onibus onibus;

	getchar();
	printf("Placa: ");
	scanf("%8s", onibus.placa);

	for(i=0; i<3; i++) {
		onibus.placa[i] = letra_maiuscula(onibus.placa[i]);
	}

	getchar();
	printf("Numero do carro: ");
	scanf("%d", &onibus.num_carro);
	getchar();
	printf("Empresa: ");
	scanf("%50[^\n]", onibus.empresa);
	i=0;
	while(onibus.empresa[i] != '\0'){
	    onibus.empresa[i] = maiusculo_e_minusculo(onibus.empresa[i], i);
	    i++;
	}
	getchar();
	printf("Cor: ");
	scanf("%10s", onibus.cor);
	i=0;
	while(onibus.empresa[i] != '\0'){
	    onibus.cor[i] = maiusculo_e_minusculo(onibus.cor[i], i);
	    i++;
	}
	getchar();
	printf("Linha: ");
	scanf("%d", &onibus.linha);
	getchar();
	return onibus;
}

int conferir_placa(char *placa_nova, char *placa) { 
	int i, cont=0;

	for (i=0; i<7; i++) {
		if (placa_nova[i] == placa[i]) {
			cont++;
		}
	}

	if(cont == 7) {
		return 1;
	}
	else {
		return 0;
	}
} //Conferir se a placa ja existe

void mostrar(struct Onibus onibus) {
	int i=0;

	printf("Itens cadastrados\n");
	printf("\nPlaca: %s", onibus.placa);
	printf("\nNumero do carro: %d", onibus.num_carro);
	printf("\nEmpresa: ");
	while(onibus.empresa[i] != '\0') {
		printf("%c", onibus.empresa[i]);
		i++;
	}
	printf("\nCor: %s", onibus.cor);
	printf("\nLinha: %d\n", onibus.linha);
}

void atualizar() {
	printf("Atualizar item\n");

}

void excluir() {
	printf("(4) Excluir item\n");

}

int sair() {
	int fechar;
	printf ("\nEncerrar programa ?\n(1) Para confirmar\n(2) Para retornar ao menu\nOpcao: ");
	scanf("%d", &fechar);
	if (fechar==1) {
		return 1;
	}
	else {
		return 0;
	}

}


int main()
{
	int opcao;
	int cont_onibus=0; //quantidade de onibus
	int i=0;
	struct Onibus onibus[1000];
	int fechar = 0;


	printf ("\n\n\t\tOLA!\n\n");

	do {
		menu();
		scanf("%d", &opcao);

		switch(opcao) {
		case 1:
			onibus[cont_onibus] = adicionar();
			printf("Placa: %s", onibus[cont_onibus].placa);
			int teste;
			i=0;

			while(i<cont_onibus) {
				teste = conferir_placa(onibus[cont_onibus].placa, onibus[i].placa);
				if (teste) {
					printf("\nOnibus ja cadastrado!\n");
					break;
				}
				else {
					i++;
				}
			}
			if(!teste) {
				printf("\nOnibus cadastrado com sucesso\n");
				cont_onibus++;
			}

			break;

		case 2:

			for(i=0; i<cont_onibus; i++) {
				mostrar(onibus[i]);
			}

			break;

		case 3:
			atualizar();
			break;

		case 4:
			excluir();
			break;

		case 5:
			fechar=sair();


			break;

		default:

			break;
		}


	} while(fechar !=1);

	imprimir_linha();
	printf("Programa Encerrado com Sucesso !");

	return 0;
}

