#include <stdio.h>
int main()
{

    int n1 = 0, n2 = 1,n;
    long int n3;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Fibonacci series up to %dth term is : %d,%d,", n, n1, n2);
    for (int i = 3; i <= n; i++)
    {
        n3 = n1 + n2;
        printf("%d,", n3);
        n1 = n2;
        n2 = n3;
    }
    return 0;
}