#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double func(double x)
{

    return x * x * x - 4 * x - 9;
}
int main()
{
    double a, b, x = 0;
    scanf("%lf %lf", &a, &b);
int count=0;
    while (1)
    {count++;
        x = (a + b) / 2;
        if (func(x) * func(a) < 0)
        {
            b = x;
        }
        else if (func(x) * func(b) < 0)
            a = x;

printf("x = %lf   itr no= %d\n",x,count);
        printf("%lf %lf\n", a, b);
int r=5;
      int k= b * pow(10, r);
      int l= a * pow(10, r);
printf("k=%d l=%d\n",l,k);
        if (k-l <1)
        {
            break;
        }
    }
    return 0;
}