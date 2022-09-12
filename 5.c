#include <stdio.h>

void Pnums(int);
int main()
{
    int num;

    printf("Enter a number\n");
    scanf("%d", &num);

    Pnums(num);

    return 0;
}

void Pnums(int n)
{
    int x = 2, z = 1, i, j, flag;

    while (z <= n)
    {
        for (i = 2, j = 1; j < x; i++, j++)
        {
            flag = x;

            if (x % i == 0)
                break;
        }
        if (flag == i)
        {
            printf("%d ", x);
            z++;
        }
        x++;
    }
}