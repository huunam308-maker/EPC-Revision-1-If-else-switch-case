#include <stdio.h>
#include <math.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 30 && (n % 2 == 0 || n % 3 == 0 || n % 5 == 0))
    {
        printf("1");
    }
    else
    {
        printf("0");
    }

    return 0;
}
