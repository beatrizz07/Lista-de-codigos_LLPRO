#include <stdio.h>
#include <locale.h>

// Questão 09

int soma_div (int n);

int main () {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int num, resultado;
	
	printf("\n         QUESTÃO 09     \n");
	printf("\nEscreva um valor:");
	scanf("%d", &num);
	
	resultado = soma_div(num);
	
	printf("\nA soma dos divisores é: %d\n", resultado);
}

int soma_div(int n) {
	int divisores;
	
	for(int d = 1; d <= n; d++) {
		if(n % d == 0) {
			
			divisores = divisores + d;
		}
	}
	return divisores;
}

