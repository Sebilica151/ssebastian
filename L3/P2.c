/*
2. Se citeste de la tastatura un numar C cu valori posibile intre 0-7. Dupa citirea numarului "C" se vor citi de la tastatura "N" numere iar acele numere care au in reprezentarea lor binara, bitul de pe pozitia "C" cu valoare 1, se vor afisa
Ex:
C = 2
N = 5
- Acum se citesc 5 numere:
1 2 3 4 5
- Se afiseaza la sfarsit
4 5
Deoarece 4 = 100 si 5 = 101, bitul de pe pozitia "2" este "1"

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	long int dec;
	int C, N, v[100], i;
	printf("C este :");
	scanf("%d", &C);
	while (C > 7)
	{
		printf("Eroare\n");
		break;
	}
	while (C < 0)
	{
		printf("Eroare\n");
		break;
	}
	printf("Se citesc N numere de la tastatura: ");
	scanf("%d", &N);
	for (i = 1; i <= N; i++)
	{
		scanf("%d", &v[i]);
	}
	printf("\n");
	for (i = 1; i <=N; i++)
	{
		if (1&(i>>C))
			printf("%d ",i);
	}
	printf("\n");
	system("pause");
	return 0;
}
	