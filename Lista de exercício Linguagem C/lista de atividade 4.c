#include <math.h>
#include <stdio.h>

int main(void) {
	int opcao;
	int numeros[100];
	int i, j, aux;
	int valor, binario[7], quantidade;
	int encontrou, inicio, fim;
	double numero, maior, atual, diferenca;
	double x1, y1, x2, y2, distancia;

	do {
		printf("\n===== MENU =====\n");
		printf("1 - Inverso e ordem crescente de 100 numeros\n");
		printf("2 - Notacao cientifica\n");
		printf("3 - Converter numero para binario\n");
		printf("4 - Maior de 10 numeros\n");
		printf("5 - Verificar numeros pares e impares\n");
		printf("6 - Distancia entre dois pontos\n");
		printf("7 - Encontrar numeros consecutivos no vetor\n");
		printf("0 - Sair\n");
		printf("Escolha uma opcao: ");
		if (scanf("%d", &opcao) != 1) {
			printf("\nEntrada invalida. Digite um numero de 0 a 7.\n");
			return 1;
		}

		switch (opcao) {
			case 1:
				for (i = 0; i < 100; i++) {
					printf("Digite o numero %d de 100: ", i + 1);
					if (scanf("%d", &numeros[i]) != 1) {
						printf("\nEntrada invalida. Digite um numero inteiro.\n");
						return 1;
					}
				}

				printf("Ordem inversa: ");
				for (i = 99; i >= 0; i--) {
					printf("%d ", numeros[i]);
				}
				printf("\n");

				for (i = 0; i < 99; i++) {
					for (j = 0; j < 99 - i; j++) {
						if (numeros[j] > numeros[j + 1]) {
							aux = numeros[j];
							numeros[j] = numeros[j + 1];
							numeros[j + 1] = aux;
						}
					}
				}

				printf("Ordem crescente: ");
				for (i = 0; i < 100; i++) {
					printf("%d ", numeros[i]);
				}
				printf("\n");
				break;

			case 2:
				printf("Digite um numero positivo: ");
				if (scanf("%lf", &numero) != 1) {
					printf("\nEntrada invalida. Digite um numero.\n");
					return 1;
				}
				if (numero > 0) {
					printf("Notacao cientifica: %e\n", numero);
				} else {
					printf("O numero precisa ser positivo.\n");
				}
				break;

			case 3:
				printf("Digite um numero de 1 a 64: ");
				if (scanf("%d", &valor) != 1) {
					printf("\nEntrada invalida. Digite um numero inteiro.\n");
					return 1;
				}
				if (valor < 1 || valor > 64) {
					printf("O numero precisa estar entre 1 e 64.\n");
					break;
				}

				quantidade = 0;
				while (valor > 0) {
					binario[quantidade] = valor % 2;
					quantidade++;
					valor = valor / 2;
				}

				printf("Em binario: ");
				for (i = quantidade - 1; i >= 0; i--) {
					printf("%d", binario[i]);
				}
				printf("\n");
				break;

			case 4:
				printf("Digite o numero 1 de 10: ");
				if (scanf("%lf", &maior) != 1) {
					printf("\nEntrada invalida. Digite um numero.\n");
					return 1;
				}

				for (i = 1; i < 10; i++) {
					printf("Digite o numero %d de 10: ", i + 1);
					if (scanf("%lf", &atual) != 1) {
						printf("\nEntrada invalida. Digite um numero.\n");
						return 1;
					}

					diferenca = maior - atual;
					if (diferenca < 0) {
						diferenca = -diferenca;
					}
					maior = (maior + atual + diferenca) / 2;
				}

				printf("O maior numero eh: %.2f\n", maior);
				break;

			case 5:
				for (i = 0; i < 100; i++) {
					printf("Digite o numero %d de 100: ", i + 1);
					if (scanf("%d", &numeros[i]) != 1) {
						printf("\nEntrada invalida. Digite um numero inteiro.\n");
						return 1;
					}
				}

				for (i = 0; i < 100; i++) {
					if (numeros[i] % 2 == 0) {
						printf("%d eh par\n", numeros[i]);
					} else {
						printf("%d eh impar\n", numeros[i]);
					}
				}
				break;

			case 6:
				printf("Digite x1 e y1: ");
				if (scanf("%lf %lf", &x1, &y1) != 2) {
					printf("\nEntrada invalida. Digite dois numeros.\n");
					return 1;
				}
				printf("Digite x2 e y2: ");
				if (scanf("%lf %lf", &x2, &y2) != 2) {
					printf("\nEntrada invalida. Digite dois numeros.\n");
					return 1;
				}

				distancia = sqrt((x2 - x1) * (x2 - x1) +
				                 (y2 - y1) * (y2 - y1));
				printf("A distancia eh: %.2f\n", distancia);
				break;

			case 7:
				for (i = 0; i < 100; i++) {
					printf("Digite o numero %d de 100: ", i + 1);
					if (scanf("%d", &numeros[i]) != 1) {
						printf("\nEntrada invalida. Digite um numero inteiro.\n");
						return 1;
					}
				}

				encontrou = 0;
				i = 0;
				while (i < 99) {
					if (numeros[i + 1] == numeros[i] + 1) {
						inicio = i;
						fim = i + 1;

						while (fim < 99 &&
						       numeros[fim + 1] == numeros[fim] + 1) {
							fim++;
						}

						printf("Sequencia: ");
						for (j = inicio; j <= fim; j++) {
							printf("%d ", numeros[j]);
						}
						printf("\n");

						encontrou = 1;
						i = fim + 1;
					} else {
						i++;
					}
				}

				if (encontrou == 0) {
					printf("Nenhuma sequencia encontrada.\n");
				}
				break;

			case 0:
				printf("Programa encerrado.\n");
				break;

			default:
				printf("Opcao invalida. Escolha de 0 a 7.\n");
		}
	} while (opcao != 0);

	return 0;
}
