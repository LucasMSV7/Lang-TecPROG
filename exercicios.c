#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int a, b, c, r;
	
	printf("Entre com os valores A B C: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a>b){
	    r = a;
	} 
	if(b>a){
		r = b;
	}
	if(r>c){
		r = r;
	} 
	if(c>r){
		r = c;
	}
	printf("%d eh maior", r);

/*
	printf("Entre com os valores A B C: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a>b){
	    r = a;
	} else{
		r = b;
	} 
	if(c>r){
		r = c;
	}

	printf("%d eh maior", r);
*/

    int a;
    
    printf("Digite um valor: ");
    scanf("%d", &a);
    if(a%2 == 0){
    	printf("par");
	} else{
		printf("impar");
	} 
    
	return 0;
}
