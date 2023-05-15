#include <stdio.h>
int main()
{
    int x = 10;
    printf("%p\n", &x);
    // reference
    int *p = &x;
    printf("%p\n", p);
    // dereference
    printf("%d\n", *p);
    *p = 20;
    printf("%d", x);
    return 0;
}