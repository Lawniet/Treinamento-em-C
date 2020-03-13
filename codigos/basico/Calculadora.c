/* Implemantação de código para uma calculadora simples de quatro 
   operações básicas. Desafio: implemente mais operações matemáticas.
   Dica: Use ^ para potência e _ para logaritmo. */
   
#include <stdio.h>

int main (void)
{
	float numero1, numero2, resultado;
	char operacao;
	
	/* Entrada dos dados com scanf de múltiplos argumentos*/
	printf("Operacoes disponiveis: /, *, +, - \n");
	printf("Digite a formula no formato -> numero operacao numero: \n");
	scanf("%f %c %f", &numero1, &operacao, &numero2);
	
	/* Condicional múltipla para decisão da operação*/
	switch(operacao)
	{
		case '/':
			resultado = numero1 / numero2;
			printf("Resultado da divisao = %f \n",resultado);
		break;
		case '*':
			resultado = numero1 * numero2;
			printf("Resultado da multiplicacao = %f \n",resultado);
		break;
		case '+':
			resultado = numero1 + numero2;
			printf("Resultado da soma = %f \n",resultado);
		break;
		case '-':
			resultado = numero1 - numero2;
			printf("Resultado da subtracao = %f \n",resultado);
		break;
		default:
			printf("Digite uma das operacoes disponiveis!");
		break;
	}
	return 0;	
}