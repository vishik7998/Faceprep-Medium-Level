Q2.Armstrong numbers between two intervals

#include <stdio.h>
#include <math.h>
int count1(int a)
{
    int count=0;
    while(a>0)
    {
        a=a/10;
        count++;
    }
    return count;
}
void armstrong1(int a, int b)
{
    int i,rem,x,sum;
    for(a;a<b;a++)
    {
        i=a;
        sum=0;
        x=count1(i);
       while(i>0)
       {
           rem=i%10;
           sum=sum+pow(rem,x);
           i=i/10;
       }
        if(a==sum)
        {
            printf("%d ",a);
        }
    }
}

int main()
{
    int n1,n2;
    printf("Enter the range: ");
    scanf("%d %d", &n1,&n2);
    printf("THe armstrong number in the range is: ");
    armstrong1(n1,n2);
    return 0;
}
