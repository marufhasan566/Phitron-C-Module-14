#include <stdio.h>
void summation(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int summation = a + b;
    printf("%d", summation);
}
int main()
{
    summation();
    summation();
    summation();
    return 0;
}