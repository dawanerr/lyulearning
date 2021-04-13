#include <stdio.h>

double mypow( double x, int n );

int main()
{
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%f\n", mypow(x, n));

    return 0;
}

double mypow( double x, int n )
{
    int i;
    double sum=x;
    if(n==0)
    {
        sum = 1;
    }
    else
    {
        for(i=1;i<n;i++)
        {
            sum *= x;
        }
    }
    return sum;
 } 
