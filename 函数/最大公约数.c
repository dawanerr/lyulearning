#include <stdio.h>



int main()
{
    int x, y;
    int gcd( int x, int y );
    scanf("%d %d", &x, &y);
    printf("%d\n", gcd(x, y));

    return 0;
}

int gcd( int x, int y )
{
    int r;
    r = x % y;
    while(r != 0)
    {
        x = y;
        y = r;
        r = x % y;
    }
    return y;
}
