#include <stdio.h>

void Pnums(int, int);
int main()
{
    int num1, num2;

    printf("Enter two number\n");
    scanf("%d %d", &num1, &num2);

    Pnums(num1, num2);

    return 0;
}

void Pnums(int n1, int n2)
{
    int x = 2, i, j, flag;

    if (n2 < n1)    //swapping nums
    {
        n1 -= n2;
        n2 += n1;
        n1 = n2 - n1;
    }
     
    n1++;

    while (n1 < n2)
    {

        for (i = 2, j = 1; j < n1; i++, j++)
        {
            flag = n1;

            if (n1 % i == 0)
                break;
        }
        if (flag == i)
        {
            printf("%d ", n1);
        }

        n1++;
    }
}
