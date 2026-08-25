#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

	//exercicio1//

	int primeiro, segundo, aux;
	
	printf("Insira o primeiro valor: ");
	scanf("%d", &primeiro);
	printf("Insira o segundo valor: ");
	scanf("%d", &segundo);
	
	  aux = primeiro;
	  primeiro = segundo;
	  segundo = aux;
	  
	printf("%d\n%d", primeiro, segundo);
	
	
	//exercicio3//
	
	int n, resultado, bit_64, bit_32, bit_16, bit_8, bit_4, bit_2;
	
	printf("\nEntre com o valor para a conversao: ");
	scanf("%d", &n);
	
	bit_64 = n%2;
	resultado = n/2;
	
	bit_32 = resultado%2;
	resultado = resultado/2;
	
	bit_16 = resultado%2;
	resultado = resultado/2;
	
	bit_8 = resultado%2;
	resultado = resultado/2;
	
	bit_4 = resultado%2;
	resultado = resultado/2;
	
	bit_2 = resultado%2;
	resultado = resultado/2;
	
	printf("O numero %d em binario = %d%d%d%d%d%d%d", n,
	        resultado%2, bit_2, bit_4, bit_8, bit_16, bit_32, bit_64);*/

		
	//exercicio4//

	char nome[50];
	double salario_fixo, total_vendas, total_receber;
	
	printf("Nome: ");
	scanf("%s", nome);
	
	printf("Salario fixo: ");
	scanf("%lf", &salario_fixo);
	
	printf("Total de vendas: ");
	scanf("%lf", &total_vendas);
	
	total_receber = salario_fixo + (total_vendas * 0.15);
	
	printf("Total = R$ %.2f\n", total_receber);
	

	//exercicio5//

	int a,b,c,d;
    int soma, media, produto;

    printf("Digite 4 valores: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    soma = a+b+c+d;
    media = soma/4;
    produto = a*b*c*d;

    printf("Soma: %d\n", soma);
    printf("Media: %d\n", media);
    printf("Produtorio: %d\n", produto);


	//exercicio6//

	int idade, anos, meses, dias;

    scanf("%d", &idade);

    anos = idade/365;
    idade = idade % 30;

    meses = idade/30;
    dias = idade % 30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);


	//exercicio7//

	printf("Volume de uma esfera: ");
       
    double R, volume;
    double pi = 3.14159;

    scanf("%lf", &R);

    volume = (4.0/3.0) * pi * R * R * R;

     printf("VOLUME = %.3lf\n", volume);	


	//exercicio8//
   
   int x1, x2, y1, y2, p1, p2;
   float dist;
   
   printf("Insira as coordenadas do ponto P1: ");
   scanf("(%d , %d)", &x1, &y1);
   
   printf("Insira as coordenadas do ponto P1: ");
   scanf("(%d , %d)", &x2, &y2);
   
   p1 = pow(x2-x1, 2);
   p2 = pow(y2-y1, 2);
   
   dist = sqrt(p1+p2);
   
   printf("Distancia (%f)", dist);
		  
	return 0;
}
