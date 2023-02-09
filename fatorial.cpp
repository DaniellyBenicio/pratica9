#include <stdio.h>
#include <locale.h>

/*recursividade - � uma fun��o que � definida em termos de si mesma, ou seja, ela chama ela mesma
ideia de recursividade - divide o problema em problemas menores do mesmo tipo.

a recursividade � formado por um ou mais caso base - ponto de encerramento da fun��o. EXEMPL0 - No fatorial o caso base � quase o n � elevado a zero, que no caso da 1.
determina quando para a estrutura.

*/

int fatorial(int n);


int main(){
	setlocale(LC_ALL, "Portuguese_brazil");
	
	int num, r;
	
	printf("Calcula o fatorial\n\n");
	
	printf("Digite um n�mero para descobrir o seu fatorial: ");
	scanf("%d", &num);
	
	r = fatorial(num);
	
	if(r == -1){
		printf("Entrada inv�lida!\n\n");
	} else{
		printf("%d", fatorial(num));
	}
	
	return 0;
}

/*
	fun��o = calcular fatorial
	entrada - n inteiro
	saida: fatorial de n, se n>0 ou -1 se n<0;
	
*/
	
int fatorial(int n){
	
	if(n==0)
		return 1;
	
	if(n>0)
		return n * fatorial(n-1);
	
	return -1;
}


