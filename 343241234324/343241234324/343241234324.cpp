#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d=0;
    scanf_s("%d", &b);
    a = 0;
    b = d;
    do {
        c = b % 10;
        a = a * 10 + c;
        b = b / 10;
    } while (b > 0); {
        if (a == d) printf("Yes");
        else printf("No"); }
    return 0;
}