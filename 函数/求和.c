#include<stdio.h>
int main()
{
    double add(double x,double y);
    double a,b,c;
    scanf("%lf %lf",&a,&b);
    c=add(a,b);
    printf("%lf",c);
    
    return 0;
 } 
 
 double add(double x,double y)
 {
     double z;
     z=x+y;
     return z;
 }
