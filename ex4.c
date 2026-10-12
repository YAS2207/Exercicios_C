#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL,"");
	int p1, p2, p3;
	float kms, litros, litrkm;
	printf("Diz os kilometros iniciais");
	scanf_s("%d", &p1); 
	printf("Diz os kilometros finais");
	scanf_s("%d", &p2);
	printf("Diz os litros gastos no total");
	scanf_s("%d", &p3);
	kms - (p2 - p1);
	litros - (p3);
	litrkm - (p3 * 100) / kms;
	printf("foram gastos: %2f/n", litrkm);
	return 0;



}