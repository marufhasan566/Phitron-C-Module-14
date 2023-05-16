#include <stdio.h>

int sum(int a, int b)
{
    int sumResult = a + b;
    return sumResult;
}
int main()
{

    int result = sum(100, 200);
    printf("%d", result);
    return 0;
}