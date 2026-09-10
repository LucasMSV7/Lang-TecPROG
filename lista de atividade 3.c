#include <stdio.h>
#include <stdlib.h>

//exercicio7//
float calc_inss(float salario){
	if(salario<=1412.00) return salario*0.75;
	else if(salario<=2666.68) return salario*0.09;
	else if(salario<=4000.0) return salario*0.2;
	else return salario*0.14;
}

int main(int argc, char *argv[]) {
		
	float salario, desconto;
	scanf("%f", &salario);
	
	desconto = calc_inss(salario);
	printf("%f || %f", desconto, calc_inss(salario));
	
	return 0;
}
