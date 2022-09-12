#include <stdio.h>

int check(int);
int main()
{
    int num, result;

    printf("Enter a number\n");
    scanf("%d", &num);

    result = check(num);
    result == 0 ? printf("Prime") : printf("Not Prime");
    
    return 0;
}
int check(int n)
{
    int i, flag = 0;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0) 
        {
            flag = 1;    // not prime
            break;
        }
        
    }

    return flag;
    
}