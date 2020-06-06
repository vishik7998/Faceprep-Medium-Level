Q8. Octal to decimal conversion

#include <stdio.h>
#include <math.h>

void dinb(int n)
{
    int rem,i=0,sum=0;
    while(n>0)
    {
        rem=n%10;
        sum += rem*pow(8,i);
        i++;
        n=n/10;
    }
    printf("The Decimal equivalent is: %d",sum);
}
int main()
{
    int a;
    printf("Enter Octal number: ");
    scanf("%d", &a);
    printf("\n");
    dinb(a);
    return 0;
}
