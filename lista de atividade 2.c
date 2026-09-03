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

	int c, f;
	
	printf("Valor da temperatura em °C: ");
    scanf("%d", &c);
	
	f=c*(9.0/5.0)+32.0;
	
	printf("Covertido para Fahrenhit: %d", f);
	
	return 0;


//exercicio5//

    float graus, radianos;
    
    const float p = 3.141592;

    printf("Digite o ângulo em graus: ");
    scanf("%f", &graus);

    radianos = graus * p / 180.0;

    printf("O ângulo em radianos é: %.6f\n", radianos);


//exercicio6//

	int numero, antecessor, sucessor;

    printf("Digite um valor: ");
    scanf("%d", &numero);

    antecessor = numero-1;
    sucessor = numero+1;

    printf("O antecessor de %d é %d e o sucessor é %d.\n", numero, antecessor, sucessor);
	

//exercicio7//

	double total_premio = 780000.00;

    double primeiro = total_premio * 0.46;
    double segundo = total_premio * 0.32;
    double terceiro = total_premio * (1.0 - 0.46 - 0.32); // Restante (22%)

    printf("Primeiro ganhador (46%%): R$ %.2f\n", primeiro);
    printf("Segundo ganhador (32%%): R$ %.2f\n", segundo);
    printf("Terceiro ganhador (restante): R$ %.2f\n", terceiro);


//exercicio8//

   int t_segundos, horas, minutos, segundos;

   printf("Digite um numero: ");
   scanf("%d", &t_segundos);

   horas = t_segundos / 3600;
   t_segundos = t_segundos % 3600;

   minutos = t_segundos / 60;
   segundos = t_segundos % 60;

   printf("%d:%d:%d\n", horas, minutos, segundos);


//exercicio9//

	int tempo, velocidade;
    double distancia, litros;

    printf("Digite o tempo gasto: ");
    scanf("%d", &tempo);
    printf("Digite a velocidade média: ");
    scanf("%d", &velocidade);

    distancia = tempo * velocidade;

    litros = distancia / 12.0;

    printf("%.3lf\n", litros);

	
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
