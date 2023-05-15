#include <stdio.h>
void sum(int a,int b)
{
    int summation = a + b;
    printf("%d", summation);
    return; // Ekhane return dewa ba na dewa ek e kotha karon void function kono value return kore na.
}
int main()
{
    int first, second;
    scanf("%d %d", &first, &second);
    sum(first, second);
    return 0;
}