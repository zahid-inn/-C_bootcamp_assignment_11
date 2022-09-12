#include <stdio.h>

int factorial(int);
void sum();
int main()
{
    sum();

    return 0;
}

int factorial(int n)
{
    int x = 1, fact = 1;

    while (x <= n)
    {
        fact *= x;
        x++;
    }
    return fact;
}

void sum()
{
    int i, sum = 0;

    for (i = 1; i <= 5; i++)
        sum = sum + factorial(i)/i;
    
    printf("%d", sum);
    
}