#include <stdio.h>
#include <stdlib.h>

void exec0(){

int n1,n2,n3,n4,resto;
	
	printf("Digite um valor: ");
    scanf("%d", &n1);
    printf("Digite um valor: ");
    scanf("%d", &n2);
    printf("Digite um valor: ");
    scanf("%d", &n3);
    printf("Digite um valor: ");
    scanf("%d", &n4);
    
    if(n1%2 == 0){
    	printf("par\n");
	} else{
		printf("impar\n");
	} 
	 if(n2%2 == 0){
    	printf("par\n");
	} else{
		printf("impar\n");
	} 
	 if(n3%2 == 0){
    	printf("par\n");
	} else{
		printf("impra\n");
	} 
	 if(n4%2 == 0){
    	printf("par\n");
	} else{
		printf("impar\n");
	} 
	
	resto = n1%5;
	if(resto == 0)
	{
		printf("Ele e multiplo de 5\n");
	} else{
		printf("Nao e multiplo de 5\n");
	}
		resto = n2%5;
	if(resto == 0)
	{
		printf("Ele e multiplo de 5\n");
	} else{
		printf("Nao e multiplo de 5\n");
	}
		resto = n3%5;
	if(resto == 0)
	{
		printf("Ele e multiplo de 5\n");
	} else{
		printf("Nao e multiplo de 5\n");
	}
		resto = n4%5;
	if(resto == 0)
	{
		printf("Ele e multiplo de 5\n");
	} else{
		printf("Nao e multiplo de 5\n");
	}
}

void exec1(){
	int quant_total, capac_max, n_mochilas, resto;
	
	printf("Digite a quantidade de itens: \n");
	scanf("%d", &quant_total);
	printf("Digite a capacidade maxima de itens: \n");
	scanf("%d", &capac_max);
	
	n_mochilas = quant_total/capac_max;
	resto = quant_total%capac_max; 
	
	printf("Legendario, são %d mochilas para seus itens, e sobram %d itens", n_mochilas, resto);
}

void exec2(){
    float valor, resultado;
    int entrada, destino;

    printf("Digite o valor: ");
    scanf("%f", &valor);
    printf("Digite o codigo da unidade de entrada: ");
    scanf("%d", &entrada);
    printf("Digite o codigo da unidade de destino: ");
    scanf("%d", &destino);

    /* Celsius para Fahrenheit */
    if (entrada == 1 && destino == 2) {
        resultado = valor * 1.8 + 32;
        printf("Resultado: %.2f F\n", resultado);
    }

    /* Fahrenheit para Celsius */
    else if (entrada == 2 && destino == 1) {
        resultado = (valor - 32) / 1.8;
        printf("Resultado: %.2f C\n", resultado);
    }

    /* Celsius para Kelvin */
    else if (entrada == 1 && destino == 3) {
        resultado = valor + 273.15;
        printf("Resultado: %.2f K\n", resultado);
    }

    /* Kelvin para Celsius */
    else if (entrada == 3 && destino == 1) {
        resultado = valor - 273.15;
        printf("Resultado: %.2f C\n", resultado);
    }

    /* Metro para Milha */
    else if (entrada == 4 && destino == 5) {
        resultado = valor / 1609.34;
        printf("Resultado: %.2f mi\n", resultado);
    }

    /* Milha para Metro */
    else if (entrada == 5 && destino == 4) {
        resultado = valor * 1609.34;
        printf("Resultado: %.2f m\n", resultado);
    }

    /* Quilograma para Libra */
    else if (entrada == 6 && destino == 7) {
        resultado = valor * 2.205;
        printf("Resultado: %.2f lb\n", resultado);
    }

    /* Libra para Quilograma */
    else if (entrada == 7 && destino == 6) {
        resultado = valor / 2.205;
        printf("Resultado: %.2f kg\n", resultado);
    }

    /* km/h para mph */
    else if (entrada == 9 && destino == 8) {
        resultado = valor / 1.609;
        printf("Resultado: %.2f mph\n", resultado);
    }

    /* mph para km/h */
    else if (entrada == 8 && destino == 9) {
        resultado = valor * 1.609;
        printf("Resultado: %.2f km/h\n", resultado);
    }

    /* Código de conversão inexistente */
    else {
        printf("Unidade nao existe no sistema.\n");
    }
}


int main(int argc, char *argv[]) {
	
		int op;
	printf("Insira qual exercicio quer resolver: [1|2|3]\n");
	scanf("%d", &op);
	
	switch(op){
		
		case 1:
			exec0();
		break;
		
		case 2:
			exec1();
		break;

        case 3:
            exec2();
        break;
           
			
	}
	
	
	
	
	return 0;
}
