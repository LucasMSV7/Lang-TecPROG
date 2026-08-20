#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//exercicio10//
	
	int a,b,c, maior, maior_temp;
	
	printf("Informe os valores a serem comparados: ");
	scanf("%d %d %d", &a,&b,&c);
	
	//conta
	maior = (a+b+c+abs(a-b))/2;
	
	printf("O maior entre |%d|%d|%d| = %d", a,b,c, maior);
	
	return 0;
}
