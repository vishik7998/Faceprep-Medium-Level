Q7. Decimal to octal conversion

#include <stdio.h>
#include <math.h>

void dinb(int n)
{
    int rem,i=0,sum=0;
    while(n>0)
    {
        rem=n%8;
        sum += rem*pow(10,i);
        i++;
        n=n/8;
    }
    printf("The Octal equivalent is: %d",sum);
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
