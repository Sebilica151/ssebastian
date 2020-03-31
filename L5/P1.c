///1. Sa se scrie un program care citeste de la tastura &quot;N&quot;
///numere naturale. Pentru fiecare numar se va determina forma
///lui binara, se va calcula inversul binar ,iar mai apoi se
///introduce intr-o stiva forma binara inversata.
///Ex:
///Input : 27
///Forma binara : 0001 1011
///Forma binara stiva output: 1110 0100
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 8
int ArrayS1[MAX_SIZE], k, top = -1, bin[MAX_SIZE];
void push(int x)
{
	if (top == MAX_SIZE - 1)
	{
		printf("\n eroare: stiva plina\n ");
		return;
	}
	ArrayS1[++top] = x;
}

void pop()
{
	if (top == -1)
	{
		printf("\n eroare : stiva goala\n");
		return;
	}
	top--;
}
void binar(int x)
{
	int i, j;
	for (i = 0; i < MAX_SIZE; i++)
		bin[i] = 0;
	while (x > 0)
	{
		bin[k] = x % 2;
		x = x / 2;
		k++;
	}
}
void inv(int x)
{
	binar(x);
}

int main()
{
	int nr, i, j, x;
	printf("nr elemente: ");
	scanf("%d", &nr);

	for (i = 0; i < nr; i++)
	{
		printf(" elementul cu nr : ");
		scanf("%d", &x);
		binar(x);
		printf(" forma binara : ");
		for (j = 7; j >= 0; j--)
			printf("%d", bin[j]);

		binar(x);

		for (j = 0; j < 7; j++)
			push(bin[j]);

		printf(" forma binara invers: ");
		while (top != -1)
		{
			printf("%d", ArrayS1[top]);
			pop();
		}
	}
	getch();
}
