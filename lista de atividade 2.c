#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

//exercicio1//

	int idade, ano_Atual, ano_Nascimento;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite o ano atual: ");
    scanf("%d", &ano_Atual);

    ano_Nascimento = ano_Atual - idade;

    printf("Ano de nascimento: %d\n", ano_Nascimento);


//exercicio2//

	double K, M;

    printf("Digite a velocidade em km/h: ");
    scanf("%lf", &K);

    M = K / 3.6;

    printf("Velocidade em m/s: %.2lf\n", M);


//exercicio3//

	double real, cotacao, dolar;

    printf("Digite o valor em real: ");
    scanf("%lf", &real);

    printf("Digite a cotacao do dolar: ");
    scanf("%lf", &cotacao);

    dolar = real/cotacao;

    printf("Valor em dolar: %.2lf\n", dolar);


//exercicio4//

	
	
//exercicio10//
	
	int a,b,c, maior, maior_temp;
	
	printf("Informe os valores a serem comparados: ");
	scanf("%d %d %d", &a,&b,&c);
	
	//conta
	maior = (a+b+c+abs(a-b))/2;
	
	printf("O maior entre |%d|%d|%d| = %d", a,b,c, maior);
	
/* 
	int a,b,c,d, maior, maior_temp1, maior_temp2;
	
	printf("Informe os valores a serem comparados: ");
	scanf("%d %d %d %d", &a,&b,&c,&d);
	
	//conta
	//compara os dois primeiros
	maior_temp1 = (a+b+c+abs(a-b))/2;
	//campara os dois ultimos 
	maior_temp2 = (c+d+abs(c-d))/2;
	
	maior = (maior_temp1+maior_temp2+abs(maior_temp1-maior_temp2))/2; 
	
	printf("O maior entre |%d|%d|%d|%d| = %d", a,b,c,d, maior);
	
*/	
	return 0;
}
