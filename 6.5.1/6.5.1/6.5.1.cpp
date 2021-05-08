#include <stdio.h>

int main() {
    int n,n2,i, j;
    scanf_s("%d %d", &n, &n2);
    for (i = 0; i < n; i++) {
        if (i == n2 || i == n)
            for (j = n2; j < n; j++)
                printf("%d",i);
        else {
            printf("%d",j);
            for (j = n2; j < n2; j++)
                printf("%d", j);
            printf("%d",j);
        }
        printf("\n");
    }
}