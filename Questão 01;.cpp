#include <stdio.h>
#include <locale.h>

//Questão 01.

int somar_numero(int n);

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int numero, soma;
	
	printf("\n\n      QUESTÃO 01        \n");
	printf("\nEscreva um número:");
	scanf("%d", &numero);

    soma = somar_numero(numero);

	printf("\nA soma  final é: %d", soma);
}
int somar_numero(int n) {
	int resultado = 0;
	
	for(int i = 1; i <= n; i++) {
		
		resultado = resultado + i;
	}
	
	return resultado;
}
