#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

        if ((a + b > c) && (b + c > a) && (c + a > b))
    {
        if (a == b && b == c)
        {
            printf("1");
        }
        else if (a == b || a == c || b == c)
        {
            printf("2");
        }
        else if ((a * a > b * b + c * c) || (b * b > a * a + c * c) || (c * c > a * a + b * b))
        {
            printf("3");
        }
        else
        {
            printf("4");
        }
    }
    else
    {
        printf("This is not a triangle");
    }

    return 0;
    
}
