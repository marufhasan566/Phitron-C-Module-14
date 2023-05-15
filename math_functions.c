#include <stdio.h>
#include <math.h>
int main()
{
    double n;
    scanf("%lf", &n);
    double m;
    scanf("%lf", &m);
    // int ans = ceil(n);
    // int ans = floor(n);
    // int ans = round(n);
    // int ans = sqrt(n);
    int ans = pow(n,m);
    // int ans = abs(n);
    printf("%d", ans);
    return 0;
}