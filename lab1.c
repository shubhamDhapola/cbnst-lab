#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void roundOff(int places, double value)
{

   double val = (value * pow(10, places + 1));
   int temp=(int)val;
   int nos = temp % 10;

   if(nos>5)
   {
      temp+=10;
      temp-=nos;
      temp/=10;
      double ans=temp/pow(10,places);
  printf(" %lf",ans);

   }
   else if (nos<5)
   {
       temp-=nos;
      temp/=10;
      double ans =temp/pow(10,places);
  printf(" %lf",ans); 

   }
   else
   {
      int x=temp/10;
      int y=x%10;
      if(y%2==1)
      {
         x=x+1;
      }
      double k=x/pow(10,places);
      printf(" %lf",k);
   }
//   printf("%d",temp); 
 //  printf("\n%d",op);
}

int main()
{
   double x1, x2;
   int places;
   // printf("enter the values of x1 and x2");
   // scanf("%lf %lf", &x1, &x2);
   // printf("till how many places do we have to roundoff");
   // scanf("%d", &places);

   double temp = x1 - x2;
   if (temp < 0)
   {
      temp *= -1;
   }
   double Ea = temp;
   double Er = (Ea / x1);
   double Ep = (Er * 100);

   // printf("%lf %lf %lf ", Ea, Er, Ep);
   roundOff(3,4.567632);
   roundOff(3,7.21331);

   roundOff(5,8.43545546);

   roundOff(8,5.2345);

   return 0;
}