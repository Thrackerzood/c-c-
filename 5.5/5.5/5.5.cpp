#include  <stdio.h>

int main(void)
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) printf(i == n ? "%d" : "%d ", i);
    }
    printf("\n");
    for (int i = n; i > 0; --i) {
        if (n % i == 0) printf(i == 1 ? "%d" : "%d ", i);
    }
    return 0;
}