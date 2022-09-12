#include <stdio.h>

int find_square(int);
int main()
{
    int num, result;

    printf("Enter a number\n");
    scanf("%d", &num);

    result = find_square(num);

    printf("Square of %d is %d", num, result);

    return 0;
}
int find_square(int n)
{
    int square;
    
    square = n * n;

    return square;
}