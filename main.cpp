#include <stdio.h>
#include <math.h>

int count(int p)
{
    if (p <= 2)
    {
        return pow(2, p);
    }
    int number = pow(2, p) - (p - 2);

    return number;
}

int main()
{
    int p;
    printf("Enter the number of digits (between 1 and 30): ");
    scanf("%d", &p);
    if (p < 1 || p > 30)
    {
        printf("Invalid number, put number between 1 and 30 \n");
        return 1;
    }

    int result = count(p);
    printf("%d\n", result);

    return 0;
}
