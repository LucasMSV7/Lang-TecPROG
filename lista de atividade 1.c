#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int op;
	printf("Insira qual exercicio quer resolver: [1|2|3|4|5|6|7|8]\n");
	scanf("%d", &op);
	
	switch(op){
	

    //exercicio1//
        case 1:
            
        int primeiro, segundo, aux;
        
        printf("Insira o primeiro valor: ");
        scanf("%d", &primeiro);
        printf("Insira o segundo valor: ");
        scanf("%d", &segundo);
        
        aux = primeiro;
        primeiro = segundo;
        segundo = aux;
        
        printf("%d\n%d", primeiro, segundo);

        break;
	
    //exercicio2//
        case 2:
            
        int expoente = 0;
        double c;
        printf ("\ninsira um numero: ");
        scanf ("%lf", &c);
        if (c >= 10) {
            while (c >= 10) {
                c = c/10;
                expoente++;
            }
        };
        if (c < 1) {
            while (c <= 1) {
                c = c*10;
                expoente--;
            }
        };
        printf("notação cientifica do numero: %lf * 10^%d", c, expoente);
        
        break;
	
    //exercicio3//
        case 3:
            
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
                resultado%2, bit_2, bit_4, bit_8, bit_16, bit_32, bit_64);
        
        break;
		
    //exercicio4//
        case 4:
            
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
        
        break;
	
    //exercicio5//
        case 5:
            
        int a, b, valor_c, d;
        int soma, media, produto;

        printf("Digite 4 valores: ");
        scanf("%d %d %d %d", &a, &b, &valor_c, &d);

        soma = a + b + valor_c + d;
        media = soma / 4;
        produto = a * b * valor_c * d;

        printf("Soma: %d\n", soma);
        printf("Media: %d\n", media);
        printf("Produtorio: %d\n", produto);
        
        break;

    //exercicio6//
        case 6:
            
        int idade, anos, meses, dias;

        printf("Digite um valor: ");

        scanf("%d", &idade);

        anos = idade / 365;
        idade = idade % 365;

        meses = idade/30;
        dias = idade % 30;

        printf("%d ano(s)\n", anos);
        printf("%d mes(es)\n", meses);
        printf("%d dia(s)\n", dias);
	
	    break;

    //exercicio7//
        case 7:
            
        printf("Volume de uma esfera: ");
        
        double R, volume;
        double pi = 3.14159;

        scanf("%lf", &R);

        volume = (4.0/3.0) * pi * R * R * R;

        printf("VOLUME = %.3lf\n", volume);	
        
        break;

    //exercicio8//
        case 8:
            
        int x1, x2, y1, y2;
        double dist;
        
        printf("Insira as coordenadas do ponto P1 (x y): ");
        scanf("%d %d", &x1, &y1);
        printf("Insira as coordenadas do ponto P2 (x y): ");
        scanf("%d %d", &x2, &y2);
    
        dist = sqrt((x2 - x1) * (x2 - x1) +
                    (y2 - y1) * (y2 - y1));
   
        printf("Distancia = %.2f\n", dist);
	
	    break;
		  
	}
    return 0;
}
