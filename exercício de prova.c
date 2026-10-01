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

void exec3(){
    int quant_total, capac_max, n_mochilas, resto;

	printf("Digite a quantidade de itens: \n");
	scanf("%d", &quant_total);
	printf("Digite a capacidade maxima de itens: \n");
	scanf("%d", &capac_max);
	
	n_mochilas = quant_total/capac_max;
	resto = quant_total%capac_max; 
	
	printf("Legendario, são %d mochilas para seus itens, e sobram %d itens", n_mochilas, resto);
}

void exec4(){
    int a,b,c;

    printf("Digite um valor: ");
    scanf("%d", &a);
    printf("Digite um valor: ");
    scanf("%d", &b);
    printf("Digite um valor: ");
    scanf("%d", &c);

    a == b;
    a == c;
    b == c;

    if (a == b || a == c || b == c){
        printf("Os numeros tem que serem distintos");
    }
    else {

        if (a < b && b < c) {
            printf("%d %d %d", a, b, c);
        }
        else if (a < c && c < b) {
            printf("%d %d %d", a, c, b);
        }
        else if (b < a && a < c) {
            printf("%d %d %d", b, a, c);
        }
        else if (b < c && c < a) {
            printf("%d %d %d", b, c, a);
        }
        else if (c < a && a < b) {
            printf("%d %d %d", c, a, b);
        }
        else {
            printf("%d %d %d", c, b, a);
        }
    }
}   

void exec5(){
    float valor1, valor2;
    int codigo;

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    printf("Digite o codigo da operacao (1 a 4): ");
    scanf("%d", &codigo);

    if(codigo == 1){

        if(valor1>valor2)
            printf("Verdadeiro");
        
        else
            printf("Falso");
    }
    else if (codigo == 2) {

        if (valor1 < valor2)
            printf("Verdadeiro");
        else
            printf("Falso");

    }
    else if (codigo == 3) {

        if (valor1 == valor2)
            printf("Verdadeiro");
        else
            printf("Falso");

    }
    else if (codigo == 4) {

        if (valor1 != valor2)
            printf("Verdadeiro");
        else
            printf("Falso");

    }
    else {

        printf("operador invalido");
    }
}

void exec6(){
     int a, b, c, d, e;

    printf("Digite 5 numeros inteiros:\n");

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);

    if (b == a + 1)
        printf("%d %d\n", a, b);

    if (c == b + 1)
        printf("%d %d\n", b, c);

    if (d == c + 1)
        printf("%d %d\n", c, d);

    if (e == d + 1)
        printf("%d %d\n", d, e);
}

void exec7(){
    float peso, altura, imc;

    printf("Digite o peso em kg: ");
    scanf("%f", &peso);
    printf("Digite a altura em metros: ");
    scanf("%f", &altura);
    
    imc = peso / (altura * altura);

    printf("IMC: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Abaixo do peso");
    }
    else if (imc <= 24.9) {
        printf("Normal");
    }
    else if (imc <= 29.9) {
        printf("Acima do peso");
    }
    else {
        printf("Obeso");
    }

}

void exec8(){
    int A = 6;
    int B = 0;
    int C = 0;

    printf("Estado inicial:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n\n", C);

    //1 - Disco 1: A para C
    A = A - 1;
    C = C + 1;
    printf("Disco 1: A -> C\n");
    printf("A = %d, B = %d, C = %d\n", A, B, C);

    //2 - Disco 2: A para B
    A = A - 2;
    B = B + 2;
    printf("Disco 2: A -> B\n");
    printf("A = %d, B = %d, C = %d\n", A, B, C);

    //3 - Disco 1: C para B
    C = C - 1;
    B = B + 1;
    printf("Disco 1: C -> B\n");
    printf("A = %d, B = %d, C = %d\n", A, B, C);

    //4 - Disco 3: A para C
    A = A - 3;
    C = C + 3;
    printf("Disco 3: A -> C\n");
    printf("A = %d, B = %d, C = %d\n", A, B, C);

    //5 - Disco 1: B para A
    B = B - 1;
    A = A + 1;
    printf("Disco 1: B -> A\n");
    printf("A = %d, B = %d, C = %d\n", A, B, C);

    //6 - Disco 2: B para C
    B = B - 2;
    C = C + 2;
    printf("Disco 2: B -> C\n");
    printf("A = %d, B = %d, C = %d\n", A, B, C);

    //7 - Disco 1: A para C
    A = A - 1;
    C = C + 1;
    printf("Disco 1: A -> C\n");
    printf("A = %d, B = %d, C = %d\n", A, B, C);
}

int main(int argc, char *argv[]) {
	
		int op;
	printf("Insira qual exercicio quer resolver: [0|1|2|3|4|5|6|7|8]\n");
	scanf("%d", &op);
	
	switch(op){
		
		case 0:
			exec0();
		break;
		
		case 1:
			exec1();
		break;

        case 2:
            exec2();
        break;

        case 3:
            exec3();
        break;

        case 4:
            exec4();
        break;
        
        case 5:
            exec5();
        break;

        case 6:
            exec6();
        break;

        case 7:
            exec7();
        break;

        case 8:
            exec8();
        break;
			
	}
	
	return 0;
}
