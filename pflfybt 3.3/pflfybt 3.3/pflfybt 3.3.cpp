#include <stdio.h>

int main()
{
	int K;
	scanf_s("%d", &K);
	if (K % 10 == 1&&K!=11) printf("%d karta", K);
	else if (K % 10 > 1 && K % 10 < 5 && K!=10 && K!=11 && K!=12 &&K!=13&&K!=14) printf("%d karty", K);
	else printf ("%d kart", K);
}	