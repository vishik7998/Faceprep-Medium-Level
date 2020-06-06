Q6. Decimal to binary conversion

#include <stdio.h>
#include <math.h>

void dinb(int n)
{
    int rem,i=0,sum=0;
    while(n>0)
    {
        rem=n%2;
        sum += rem*pow(10,i);
        i++;
        n=n/2;
    }
    printf("The binary equivalent is: %d",sum);
}
int main()
{
    int a;
    printf("Enter decimal number: ");
    scanf("%d", &a);
    printf("\n");
    dinb(a);
    return 0;
}
