#include<stdio.h>

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printf("Divisor of %d are:\n", n);
    for (int i = n; i; i--)
        if (n % i == 0)
            printf("%d ", i);

    return 0;
}