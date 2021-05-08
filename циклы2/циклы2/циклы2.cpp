#include <stdio.h>
int main()
{
int a=0, b=3228;
while (b!=0) 
{
scanf_s("%d", &b);
if (b == 0) break;
a ++ ;
}
printf("%d", a);
return 0;
}