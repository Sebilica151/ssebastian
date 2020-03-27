/*
3. Sa se realizeze un program care interschimba 2 valori folosind
un pointer ca variabila auxiliara.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a = 2, b = 3,*aux;
	aux = (int*)malloc(sizeof(int));
	*aux = a;
	a = b;
	b = *aux;
	printf("valoarea curenta a lui a este %d", a);
	printf("\n valoarea curenta a lui b este %d \n", b);
	system("pause");
	return 0;
}