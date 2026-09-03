#include <stdio.h>
#include <stdlib.h>

/*
tipo nome (lista de parametros){
	comandos
	comandos...
}
*/
void exec3(){
	///////////////////////////////////////////////////////////
		float tempC, tempF;
		printf("Insira a temperatura em C: \n");
		scanf("%f", &tempC);
		tempF = tempC*(9.0/5.0)+32.0;
		printf("Os %f C° sao %f F", tempC, tempF);
}

void exec2(){
		//////////////////////////////////////////////////////////
		float reais, cota;
		printf("Insira a cotacao e o valor: \n");
		scanf("%f %f", &cota, &reais);
		printf("Os %f reais sao %f trumps \n", reais, (reais/cota));
}

void exec8(){
	///////////////////////////////////////////////////////////
		float sec, horas, min;
		printf("Insira o tempo em segundos: \n");
		scanf("%d", &sec);
		horas = sec/3600;
		min = (sec-(sec*3600))/60;
		sec = sec-((horas*3600)+(min*60));
		printf("\t %d:%d:%d", horas, min, sec);
}

int main(int argc, char *argv[]) {
	
	int op;
	printf("Insira qual exercicio quer resolver: [2|3|8]\n");
	scanf("%d", &op);
	
	switch(op){
	
	case 2:
		exec2();
	break;
	
	case 3:
		exec3();
	break;
	
	case 8:
		exec8();
	break;
	
	}	
	return 0;
}
