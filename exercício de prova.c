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
	scanf("&d", &capac_max);
	
	n_mochilas = quant_total/capac_max;
	resto = quant_total%capac_max; 
	
	printf("Legendario, são %d mochilas para seus itens, e sobram %d itens", n_mochilas, resto);
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
			
	}
	
	
	
	
	return 0;
}
