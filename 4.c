Q4.Replace all 0's with 1 in a given integer

#include <stdio.h>
#include<math.h>
void ChangeToOne(int n)
{
    int rem,a,flag=0;
    a=n;
    while(n>0)
    {
        rem=n%10;
        if(rem==0)
        {
            a=a+pow(10,flag);
        }
        flag++;
        n=n/10;
    }
    printf("\nThis is the changed number: %d",a);
}
int main()
{
    int b;
    printf("Enter the Number: ");
    scanf("%d",&b);
    printf("\n");
    ChangeToOne(b);
    return 0;
}
