#include <stdio.h>
#include <math.h>




int main()
{
    int m, n, p;
    int prime( int p );
    int PrimeSum( int m, int n );
    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}

int prime( int p )
{
    int a,i;
    if(p<=1)
    {
        return 0;
    }
    else if(p==2)
    {
        return 1;
    }
    else
    {
        /*a=sqrt(p);
        for(i=1;i<=a+1;i++)
        {
            if(a%i==0)
            {
                return 0;
            }
        }
        return 1;这样不对，日后思考*/
        for ( i = 2; i < p; i++)
		{
			if (p % i == 0)
			{
				return 0;	
			}
			
		}
		return 1;
    }
 } 
 
 int PrimeSum( int m, int n )
 {
     int sum=0;
     int i;
     for(i=m;i<=n;i++)
     {
         if(prime(i)==1)
         {
             sum+=i;
         }
     }
     return sum;
  } 
