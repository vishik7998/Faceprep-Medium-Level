Q3. Can a number be expressed as a sum of two prime numbers

#include <stdio.h>
#include<math.h>
int prime(int p)
{
    int i;
    for(i=2;i<=sqrt(p);i++)
    {
        if(p%i==0)
        {
            return 0;
        }

    }
    return 1;
}
void sum(int n)
{
    int j,flag1=0,flag2=0;
    for(j=2;j<=n/2;j++)
    {
        flag1=prime(j);
        if(flag1==1)
        {
            flag2=prime(n-j);
            if(flag1==1 && flag2==1)
            {
                printf("Sum of %d and %d.\n",j,n-j);
            }
        }
    }
}
int main()
{
    int a;
    printf("Enter the Number: ");
    scanf("%d",&a);
    printf("\n");
    sum(a);
    return 0;
}
