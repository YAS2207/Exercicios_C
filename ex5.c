#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	float p1;
	printf("Qual foi a sua nota?");
	scanf_s("%f", &p1);
	getchar;
	if (p1 > 9.5)
	{
		//p1>9.5
		printf("voce foi aprovado");
	}
	else
	{
		printf("voce reprovou, amigo...");
	}
}
