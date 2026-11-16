#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");

	int A ;
	int B ;
	int C ;

	
	printf("Номер первого игрока: ");
	scanf("%d", &A);
	printf("Номер второго игрока: ");
	scanf("%d", &B);
	printf("Номер третьего игрока: ");
	scanf("%d", &C);

	int sum = A + B + C;
	int lucky = sum % 3 == 0;
	printf("Сумма номеров: %d\n", sum);
	printf("Счастливая тройка (1 — да, 0 — нет): %d\n", lucky);
	return 0;
}