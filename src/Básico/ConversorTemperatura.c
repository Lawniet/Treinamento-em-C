/* Código de implementação do algoritmo de conversão de Celsius para Fahrenheit.
 Desafio: Pesquise sobre o assunto e implemente o algoritmo de conversão inversa */

#include <stdio.h>

int main (void)
{
	/* Declaração de variáveis para o armazenamento da temperatura em 
	   Celsius ou Fahrenheit. O tipo float armazena valores reais */
	float c, f;
	/* Captura via teclado do dado com a função scanf*/
	printf("Entre com a temperatura em Celsius: \n");
	scanf("%f",&c);
	/* Cálculo da conversão */
	f = 1.8 * c + 32;
	/* Exibição do resultado final no terminal com a função printf*/
	printf(" O resultado da conversão é: \n Temperatura em Fahrenheit = %f \n",f);
	
	return 0;	
}
