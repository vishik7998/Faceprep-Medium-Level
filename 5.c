Q5. Binary to decimal conversion

#include <stdio.h>
#include <math.h>

void bind(int n)
{
    int rem,i=0,sum=0;
    while(n>0)
    {
        rem=n%10;
        sum += (rem*pow(2, i));
        i++;
        n=n/10;
    }
    printf("The decimal equivalent is: %d",sum);
}
int main()
{
    int a;
    printf("Enter binary number: ");
    scanf("%d", &a);
    printf("\n");
    bind(a);
    return 0;
}
