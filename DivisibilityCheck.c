#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("'%d' is divisible to 2.\n", n);
    else
        printf("'%d' is not divisible to 2.\n", n);
    if (n % 3 == 0)
        printf("'%d' is divisible to 3.", n);
    else
        printf("'%d' is not divisible to 3.", n);
    return 0;
}