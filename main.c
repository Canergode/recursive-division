#include <stdio.h>
#include <stdlib.h>

// Recursivel calculate quotient using repeated subtraction
int divide(int dividend,int divisor)
{
    if(divisor==0)
    {
        return 0;
    }
    else if(dividend==divisor)
    {
        return 0;
    }
    else
    {
        return 1+divide(dividend-divisor,divisor);
    }
}

int main()
{
    int a,b;

    printf("Enter the dividend:\n");
    scanf("%d",&a);

    printf("Enter the divisor:\n");
    scanf("%d",&b);

    printf("Quotient=%d\n",divide(a,b));
    printf("Remainder=%d",a-(divide(a,b)*b));

    return 0;
}
