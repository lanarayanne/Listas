/*  Projeto  */

/*
Opcao 2: Onibus
-Numero do carro:
-Empresa:
-Placa:
-Cor:
-Linha:
*/

//Validar placa
//Colocar a parte das quantidades no main

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<conio.h>

#define MAX_ONIBUS 1000

void imprimir_linha() {
	printf ("\n----------------------------------\n");
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

//Validacao para ver se a quantidade de onibus cadastrados e maior que o maximo definido
int conferir_quantidade_max_onibus(int quantidade) {
	if (quantidade > MAX_ONIBUS) {
		return 1;
	}
	else {
		return 0;
	}
}

void limpar_tela() {
	system("clear"); // Essa funcao so funciona para Linux -- alterar para funcionar em todos
}

//Validacao para ver se tem onibus cadastrados
int conferir_quantidade_onibus_dif_zero(int quantidade) {
	if (quantidade == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int validar_placa(char *placa) {
	int i;
	int cont=0;
	for (i=0; i<3; i++) {
		if ((placa[i] >= 65 && placa[i] <=90) || placa[i] >= 97 && placa[i]<= 122) {
			cont++;
		}
	}

	for (i=3; i<7; i++) {
	    if (i==4){
	        if ((placa[i] >= 48 && placa[i] <=57) || (placa[i] >= 65 && placa[i] <=90) || (placa[i] >= 97 && placa[i]<= 122) ) {
			    cont++;
		    }
	    }
	    else{
	        if (placa[i] >= 48 && placa[i] <=57) {
			    cont++;
		    }
	    }
		
	}

	if (cont == 7) {
		return 1;
	}

	else {
		return 0;
	}

}

void menu() {

	imprimir_linha();
	printf("Cadastro de Onibus");
	imprimir_linha();
	printf("(1) Adicionar Item\n"); //ok
	printf("(2) Mostrar itens cadastrados\n"); //ok
	printf("(3) Atualizar item cadastrado\n");//ok
	printf("(4) Excluir item cadastrado\n");
	printf("(5) Sair\n"); //ok
	imprimir_linha();
	printf("Escolha uma opcao: ");
}

struct Onibus adicionar() {
	int i;

	imprimir_linha();
	printf("\nAdicionar Item\n");
	imprimir_linha();
	struct Onibus onibus;

	while (getchar() != '\n');
	printf("Placa: ");
	scanf("%8s", onibus.placa);

	for(i=0; i<3; i++) {
		onibus.placa[i] = letra_maiuscula(onibus.placa[i]);
	}

	while (getchar() != '\n');
	printf("Numero do carro: ");
	scanf("%d", &onibus.num_carro);
	
	while (getchar() != '\n');
	printf("Empresa: ");
	scanf("%50[^\n]", onibus.empresa);
	i=0;
	while(onibus.empresa[i] != '\0') {
		onibus.empresa[i] = maiusculo_e_minusculo(onibus.empresa[i], i);
		i++;
	}
	while (getchar() != '\n');
	printf("Cor: ");
	scanf("%10s", onibus.cor);
	i=0;
	while(onibus.cor[i] != '\0') {
		onibus.cor[i] = maiusculo_e_minusculo(onibus.cor[i], i);
		i++;
	}
	
	printf("Numero da linha: ");
	scanf("%d", &onibus.linha);
	while (getchar() != '\n');
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
	imprimir_linha();
	printf("Itens cadastrados\n");
	imprimir_linha();
	printf("\nPlaca: %s", onibus.placa);
	printf("\nNumero do carro: %d", onibus.num_carro);
	printf("\nEmpresa: ");
	while(onibus.empresa[i] != '\0') {
		printf("%c", onibus.empresa[i]);
		i++;
	}
	printf("\nCor: %s", onibus.cor);
	printf("\nNumero da linha: %d\n", onibus.linha);
}

void menu_atualizar() {
	printf("Escolha a opcao que deseja atualizar");
	printf("\n(1) Placa");
	printf("\n(2) Numero do carro: ");
	printf("\n(3) Empresa");
	printf("\n(4) Cor");
	printf("\n(5) Numero da linha");
	printf("\nOpcao: ");
}

void atualizar(struct Onibus *onibus) {
	int opcao = 0;
	int i=0;
	imprimir_linha();
	printf("Atualizar item\n");
	imprimir_linha();
	menu_atualizar();
	scanf("%d", &opcao);

	while (opcao < 1 || opcao >5) {
		printf("Escolha uma opcao valida: ");
		scanf("%d", &opcao);
	}

	switch(opcao) {
	case 1:

		getchar();
		printf("Nova placa: ");
		scanf("%s", onibus->placa);
		for(i=0; i<3; i++) {
			onibus->placa[i] = letra_maiuscula(onibus->placa[i]);
		}
		break;

	case 2:

		getchar();
		printf("Novo numero do carro: ");
		scanf("%d", &onibus->num_carro);
		break;

	case 3:

		getchar();
		printf("Nova empresa: ");
		scanf("%50[^\n]", onibus->empresa);
		i=0;
		while(onibus->empresa[i] != '\0') {
			onibus->empresa[i] = maiusculo_e_minusculo(onibus->empresa[i], i);
			i++;
		}
		break;

	case 4:

		getchar();
		printf("Nova cor: ");
		scanf("%s", onibus->cor);
		i=0;
		while(onibus->cor[i] != '\0') {
			onibus->cor[i] = maiusculo_e_minusculo(onibus->cor[i], i);
			i++;
		}
		break;

	case 5:

		getchar();
		printf("Novo numero da linha: ");
		scanf("%d", &onibus->linha);
		break;
	}
}

void excluir(struct Onibus *onibus, int quantidade, int localizador) {
	int i;
	imprimir_linha();
	printf("Excluir item");
	imprimir_linha();

	for(i=0; i<quantidade-1; i++) {
		if (i == localizador) {
			onibus[i] = onibus[i+1];
		}
	}
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

int file_adicionar(struct Onibus *onibus) {
	//receber um onibus
	FILE *adicionar = fopen("adicionar.txt", "a");
	int i;
	
	if (adicionar==NULL) {
		printf("O arquivo nao pode ser aberto");
		return (EXIT_FAILURE);
	}
	
	/*
	char placa[7];
	int num_carro;
	char empresa[50];
	char cor[10];
	int linha;
	*/
	
	fprintf(adicionar, "Placa: %s\n", onibus->placa);
    fprintf(adicionar, "Numero do carro: %d\n", onibus->num_carro);
    fprintf(adicionar, "Empresa: %s\n", onibus->empresa);
    fprintf(adicionar, "Cor: %s\n", onibus->cor);
    fprintf(adicionar, "Numero da linha: %d\n", onibus->linha);
    
// 	fclose(adicionar);
	return (EXIT_SUCCESS);
}

int main()
{
	int opcao;
	int cont_onibus=0; //quantidade de onibus
	int i=0;
	struct Onibus onibus[MAX_ONIBUS];
	memset(&onibus, 0x0, sizeof(onibus)); //Zerar a onibus;
	int fechar = 0;


	printf ("\n\n\t\tOLA!\n\n");

	do {
		menu();
		scanf("%d", &opcao);

		switch(opcao) {
		case 1:
			limpar_tela();
			onibus[cont_onibus] = adicionar();

			if(!validar_placa(onibus[cont_onibus].placa)) {
				printf("Nota! Placa Invalida\n(3) Para atualizar");
			}
			
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
			    file_adicionar(&onibus[cont_onibus]);
				printf("\n\nOnibus cadastrado com sucesso\n");
				cont_onibus++;
			}

			break;

		case 2:
			limpar_tela();
			for(i=0; i<cont_onibus; i++) {
				mostrar(onibus[i]);
			}

			break;

		case 3:
			limpar_tela();
			char nova_placa[7];
			int localizador, cont=0;
			printf("Informe a placa do Onibus que deseja atualizar: ");
			scanf("%s", nova_placa);
			for(i=0; i<3; i++) {
				nova_placa[i] = letra_maiuscula(nova_placa[i]);
			}

			for(i=0; i<cont_onibus; i++) {
				teste = conferir_placa(nova_placa, onibus[i].placa);
				if (teste) {
					localizador=i;
					break;
				}
				else {
					cont++;
				}
			}
			if (cont == cont_onibus) {
				printf("\nOnibus nao cadastrado!\n");
			}
			else {
				atualizar(&onibus[localizador]);
			}

			break;

		case 4:
			limpar_tela();
			cont=0;
			printf("Informe a placa do Onibus que deseja excluir: ");
			scanf("%s", nova_placa);
			for(i=0; i<3; i++) {
				nova_placa[i] = letra_maiuscula(nova_placa[i]);
			}

			for(i=0; i<cont_onibus; i++) {
				teste = conferir_placa(nova_placa, onibus[i].placa);
				if (teste) {
					localizador=i;
					break;
				}
				else {
					cont++;
				}
			}
			if (cont == cont_onibus) {
				printf("\nOnibus nao cadastrado!\n");
			}
			else {
				excluir(onibus, cont_onibus, localizador);
				cont_onibus--;
				printf("\nOnibus excluido com sucesso\n");
			}
			break;

		case 5:
			limpar_tela();
			fechar=sair();


			break;

		default:
			limpar_tela();
			printf("\nOpcao Invalida!\n");

			break;
		}


	} while(fechar !=1);

	imprimir_linha();
	printf("Programa Encerrado com Sucesso !");
	imprimir_linha();

	return 0;
}

