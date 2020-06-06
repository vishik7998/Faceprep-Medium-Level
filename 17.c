Q17. Number of integers which has exactly 9 divisors

#include <stdio.h>

int factor(int a)
{
    int i,flag=0;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            flag=flag+1;
        }
    }
    return flag;
}
int count_9(int b)
{
    int j,k,count=0;
    for(j=1;j<=b;j++)
    {
        k=factor(j);
        if(k==9)
        {
            count=count+1;
            printf("%d\n",j);
        }
    }
    return count;
}

int main()
{
    int n,x;
    printf("Enter end number: ");
    scanf("%d",&n);
    printf("\n");
    x=count_9(n);
    printf("%d",x);
    return 0;
}
