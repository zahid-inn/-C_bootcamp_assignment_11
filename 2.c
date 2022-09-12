#include <stdio.h>

int hcf(int, int);
int main()
{
    int n1, n2, result;

    printf("Enter two numbers\n");
    scanf("%d %d", &n1, &n2);

    result = hcf(n1, n2);
    printf("HCF is %d ", result);

    return 0;
}
int hcf(int a, int b)
{
    int i, hcf = 1;
    int min = a < b ? a : b;

    for (i = 1; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0)
            hcf = i;
    }

    return hcf;
}