#include <stdio.h>
#include <locale.h>

int fibonacci(int n);


int main(){
	setlocale(LC_ALL, "Portuguese_brazil");
	
	int num, r;
	
	printf("Fibonacci\n\n");
	
	printf("Digite um número para descobrir o seu fibonacci: ");
	scanf("%d", &num);
	
	r = fibonacci(num);
	
	if(r == -1){
		printf("Entrada inválida!\n\n");
	} else{
		printf("%d", fibonacci(num));
	}
	
	return 0;
}

	
int fibonacci(int n){
	
	if(n==0)
		return 1;
	
	if(n>0)
		return (n-1) + (n-2);
	
	return -1;
}


