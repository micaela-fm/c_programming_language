#include <stdio.h>
/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300; floating-point version */

int main()
{
	float fahr, celsius;
	float lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	/* lower limit of temperatuire scale */
	/* upper limit */
	/* step size */

	printf("Fahr \t Celsius\n");

	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		// 3.0 significa 3 ou mais dígitos, com 0 casas decimais
		// 6.1 significa 6 ou mais dígitos, com 1 casa decimal
		printf("%3.0f \t %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}