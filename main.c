#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

	int primeiro, segundo, aux;
	
	//exercicio1//
	
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
