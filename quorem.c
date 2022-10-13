#include<stdio.h>
int main()
{
     int dividend,divisor,quotient,remainder;
     printf("enter dividend: ");
     scanf("%d", &dividend);
     printf("enter divisor:");
     scanf("%d",&divisor);

     quotient=divident/divisor;
     remainder=dividend%divisor;

     printf("Quotient = %d\n",quotient);
     printf("Remainder = %d",remainder);
     return 0;
}
