#include <stdio.h>
int sum(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int summation = a + b;
    return summation;
}
int main()
{
    int result = sum();
    printf("%d",result);
    return 0;
}