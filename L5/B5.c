///5.Sa se introduca într-o stiva toate numerele naturale pâna la
///50. Din prima stiva se vor elimina numerele prime si se vor
///adauga într-o a doua stiva sub forma binara.
///A) Sa se adauge în stiva toate numerele naturale pâna la 50.
///B) Sa se scoata din prima stiva numerele prime.
///C) Transformarea numerelor prime în baza 2. (sub forma
///finala)
///D) Sa se populeze a doua stiva cu forma binara.
///! Atentie la refacerea primei stive !
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 50
int ArrayS1[MAX_SIZE], ArrayS2[MAX_SIZE], k = 0, top = -1, top2 = -1;
void push(int x)
{
	if (top == MAX_SIZE - 1)
	{
		printf("\nEroare : Stiva este plina\n ");
		return;
	}
	ArrayS1[++top] = x;
}
void pop()
{
	if (top == -1)
	{
		printf("\nEroare : stiva este goala\n");
		return;
	}
	top--;
}
void push2(int x)
{
	if (top2 == MAX_SIZE - 1)
	{
		printf("\nEroare : Stiva este plina\n ");
		return;
	}
	ArrayS2[++top2] = x;
}
void pop2()
{
	if (top2 == -1)
	{
		printf("\nEroare : stiva este goala\n");
		return;
	}
	top2--;
}
int binar(int x)
{
	int i, bin[10], j, binar = 0;
	while (x > 0)
	{
		bin[k] = x % 2;
		x = x / 2;
		k++;
	}
	for (j = i - 1; j >= 0; j--)
		binar = binar * 10 + bin[i];
	return binar;
}

int prim(int x)
{
	int i, contor = 0;
	for (i = 0; i < x; i++)
	{
		if (x % i == 0)
			contor++;
	}
	if (contor == 2)
		return contor;
}
int main()
{
	int i, v[50];
	for (i = 0; i <= 49; i++)
		push(i);
	while (top != -1)
	{
		if (prim(ArrayS1[top]) == 1)
			push2(binar(ArrayS1[top]));
		else
			v[k++] = ArrayS1[top];
		pop();
	}
	for (i = k; i > 0; i--)
		push(v[i]);
	for (i = 0; i <= top; i++)
		printf("%d ", ArrayS1[i]);
	for (i = 0; i <= top2; i++)
		printf("%d ", ArrayS2[i]);
	getch();
}
