#include <stdio.h>

int lcm(int, int);
int main()
{
    int n1, n2, result;

    printf("Enter two numbers\n");
    scanf("%d %d", &n1, &n2);

    result = lcm(n1, n2);
    printf("Lcm is %d ", result);

    return 0;
}
int lcm(int a, int b)
{
    int i, lcm, hcf = 1;
    int min = a < b ? a : b;

    for (i = 1; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0)
            hcf = i;
    }

    lcm = a * b / hcf;

    return lcm;
}