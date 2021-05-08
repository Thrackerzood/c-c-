#include <stdio.h>
int main()
{
int K, W, A1, B1, A2, B2;
scanf_s("%d %d %d %d %d %d", &K, &W, &A1, &B1, &A2, &B2);
if ((A1 >= K && B1 <= W) || (A2 >= K && B2 <= W) || ((A1 + A2 >= K) && (B1 + B2 <= W)))printf("Yes");
else
if (A1 + A2 < K || A1 < K || A2 < K || B1 >W || B2 > W || B1+ B2 > W )printf("No");
}