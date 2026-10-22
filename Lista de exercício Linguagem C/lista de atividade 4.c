#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,maior;
	int valor[5];
	
	for(i=0;i<=100;i++){
		printf("digite um numero: ", i+1);
		scanf("%d", &valor[i]);
	}
	for(i=99;i>=0;i--){
		printf("%d", valor[i]);
	}
	for(i=0;i<100-1;i++){
		for(j=0;j<100-i-1;j++){
			if(valor[j]<valor[j+1]){
				maior = valor[j];
				valor[j] = valor[j+1];
				valor[j+1] = maior; 
			}
		}
	}
	printf("\nOrdem do maior pro menor: \n");
	for(i=0;i<5;i++){
		printf("%d", valor[i]);
	}
	printf("\n");
	return 0;
}
