/* Implemantação de código para resolução de equções do segundo grau. */

#include <stdio.h>
#include <math.h>

int main (void)
{
	/* Coeficientes da equação */
	double a, b, c;
	/* Entrada dos dados com scanf de múltiplos argumentos*/
	printf("Digite os coeficientes (a, b e c) da equacao: \n");
	scanf("%lf %lf %lf", &a, &b, &c);
	/* Bloco de condicionais que serve como filtro de operações */
	if(a == 0.0){
		double x = -c / b;
		printf("Encontrada uma raiz real: %f \n", x);
	}
	else{
		double delta = (b*b) - (4 * a * c);
		if(delta < 0.0){
			printf("Raizes reais inexistentes! \n");
		}
		else if (delta == 0.0){
			double x = -b / (2 * a);
			printf("Encontrada uma raiz real: %f \n", x);
		}
		else{
			delta = sqrt(delta);
			double x1 = (-b + delta) / (2 * a);
			double x2 = (-b - delta) / (2 * a);
			printf("Encontradas duas raizes reais: %f %f \n", x1, x2);
		}
	}
	return 0;	
}