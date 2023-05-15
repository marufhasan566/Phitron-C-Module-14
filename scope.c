#include <stdio.h>
void function(void)
{
    int s = 10;
    printf("%p\n", &s);
}
int main()
{
    int s = 10;
    printf("%p\n", &s);
    function();
    return 0;
}