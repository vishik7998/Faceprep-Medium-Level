Q18. Roots of a quadratic equation

#include <stdio.h>
#include <math.h>
void roots(double a, double b, double c)
{
    double k,x,y;
    k=(b*b)-4*a*c;
    if(k==0)
    {
        printf("The roots are equal");
        x=(-b)/(2*a);
        printf("\nThe two roots are: %lf",x);
    }
    else if(k>0)
    {
        printf("The roots are distinct and real");
        x=(-b+k)/(2*a);
        y=(b+k)/(2*a);
        printf("\nThe two roots are: %lf %lf",x,y);
    }
    else if(k<0)
    {
        printf("The roots are distinct and complex");
        x=(-b)/2*a;
        y=sqrt(-k)/(2*a);
        printf("\nThe two roots are: %.2lf+%.2lfi, %.2lf-%.2lfi",x,y,x,y);

    }
}

int main()
{
   double m,n,p;
   printf("Enter the coeffcients a,b,c: ");
   scanf("%lf %lf %lf",&m,&n,&p);
   printf("\n");
   roots(m,n,p);
   return 0;
}
