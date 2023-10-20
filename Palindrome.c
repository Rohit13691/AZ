#include <stdio.h>
int main()
{

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int OriginalN, ReverseN = 0, remainder;
    OriginalN = n;
    for (n; n != 0; n /= 10)
    {
        remainder = n % 10;
        ReverseN = ReverseN * 10 + remainder;
    }
    if (OriginalN == ReverseN)
        printf("'%d' is a Palindrome number.",OriginalN);
    else
        printf("'%d' is not a Palindrome number.",OriginalN);

    return 0;
}