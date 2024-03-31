#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int max=a+b+c;
    int max1=a+(b*c);
    if(max1>max)
        max=max1;
    int max2=a*(b+c);
    if(max2>max)
        max=max2;
    int max3=a*b*c;
    if(max3>max)
        max=max3;
    int max4=(a+b)*c;
    if(max4>max)
        max=max4;
    printf("%d",max);
    return 0;
}
