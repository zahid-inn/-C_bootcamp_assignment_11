#include <stdio.h>

int find(int);
int main()
{
    int num, result;

    printf("Enter a number\n");
    scanf("%d", &num);

    result = find(num);
    printf("Next Prime number is %d", result);

    return 0;
}
int find(int n)
{
    int i;

    n++;
    for (i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            n++;
            i = 1;
        }
    }
    return n;
}