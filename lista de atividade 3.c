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

#include <stdio.h>
#include <stdlib.h>

//exercicio8//
float calc_irpf(float salariobase){
	if(salariobase<=2259.20) return salariobase;
	else if(salariobase<=2826.65) return (salariobase*0.075)-169.44;
	else if(salariobase<=3751.05) return (salariobase*0.15)-381.44;
	else if(salariobase<=4664.68) return (salariobase*0.225)-662.77;
	else return (salariobase*0.275)-896.00;
}

int main(int argc, char *argv[]) {
		
	float salariobase;
	scanf("%f", &salariobase);
	printf("%f", calc_irpf(salariobase));
	
	return 0;
}
