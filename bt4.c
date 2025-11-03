#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 10 && n <= 20)
    {
        printf("0");
    }
    else
    {
        printf("1");
    }
    return 0;
}