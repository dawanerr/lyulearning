#include<stdio.h>
int main()
{
    double power(double, double);
    double a, b, c;
    scanf("%lf %lf", &a, &b);
    c = power(a, b);
    printf("%lf", c);
    return 0;
}

double power(double x, double y)
{
    int i;
    double sum;
    sum = 1.0;
    for(i=1; i<=y; i++)
    {
        sum *= x;
    }
    return sum;
}
