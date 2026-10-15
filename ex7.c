#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int i=0, soma=0, n;
	float media;
	
	
	do {
		printf("manda um número ae\n");
		scanf_s ("%d",&n);
		i = i + 1;
		soma = soma + n;
	} while (soma <= 1000);
	media = soma / i;
	printf("a media eh %.1f e foram somadas %i vezes", media, i);

	
}