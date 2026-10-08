#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int p1, p2;
	float area, per;
	printf("diz a base do retângulo");
	scanf_s("%d", &p1);
	printf("diz a altura do retângulo");
	scanf_s("%d", &p2);
	area = (p1 * p2);
	per = 2 * (p1 + p2);
	printf("a área do retângulo é: %1f\n",area);
	printf("o perímetro do retângulo é: %1f\n", per);
	return 0;

}

	