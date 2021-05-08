#include<stdio.h>
int main()
{
    int i, j, k, c[2000], a[1000], b[1000];
    int na, mb;
    scanf_s("%d", &na);
    for (i = 0; i < na; i++)
    {
        scanf_s("%d", &a[i]);
    }
    i = 0; j = 0; k = 0;
    b[j] = a[i];
    mb = na;
    while (i < na && j < mb)
    {
        if (a[i] < b[j])
            b[k++] = a[i++];
        else
            a[k++] = b[j++];
    }

    for (i = 0; i < k; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}