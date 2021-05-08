#include <stdio.h>
int main()
{
	int x, y, r, a;
	scanf_s("%d %d %d %d", &x, &y, &r, &a);
	if (y - r >= a) printf("Krug nad polosoi");
	else if (y + r <= 0)printf("Krug pod polosoi");
	else if ((y + r <= a) && (y - r >= 0)) printf("Krug lezhit v polose");
	else printf("Krug chastichno zakryt polosoi");
}
