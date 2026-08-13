#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	float area, raio, r2;

	printf("Insira o raio do circulo");
	scanf("%f", &raio);

	r2 = raio*raio;
	area = pi*r2;

	printf("A area do circulo de raio %f = %f", raio, area);
	
	float area, BASE, base, altura;
	
	printf("Insira o valor da base maior, base menor e altura do trapezio: ");
	scanf("%f", &BASE);
	scanf("%f", &base);
	scanf("%f", &altura);
	
	area = ((BASE+base)*altura)/2;
	
	printf("A area do trapezio e %f" , area);
	
	return 0;
}
