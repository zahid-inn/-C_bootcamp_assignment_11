#include <stdio.h>

void pascal(int);
int fact(int);
int comb(int, int);
int main()
{
    int num;

    printf("Enter a number\n");
    scanf("%d", &num);

    pascal(num);
    
    return 0;
}

void pascal(int n)
{
    int i, j, k;

    for (i = 0; i < n; i++)
    {

        for (j = 0, k = 0; j <= i; j++, k++)
        {

            if (k >= 5-i && k <= i+5)
                printf("%d", comb(i, j));
            
            else
                printf(" ");
            
        }

        printf("\n");
    }
}

int fact(int num)
{
    int i, factr = 1;

    for (i = 1; i <= num; i++)
    {
        factr *= i;
    }
    return factr;
}

int comb(int n, int r)
{
    int c = fact(n) / (fact(r) * fact(n - r));
    return c;
}
