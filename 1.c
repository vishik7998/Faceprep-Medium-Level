#include <stdio.h>
#include <math.h>

void prime1(int a, int b)
{
    int flag,i,j;
    for(a;a<b;a++)
    {
        flag = 0;
        for(i = 2; i <= sqrt(a); i++)
        {
            if(a % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d ", a);
    }
}
int main()
{
    int n1,n2;
    printf("Enter the range: ");
    scanf("%d %d", &n1,&n2);
    printf("\nThe range of prime numbers between them is: ");
    prime1(n1,n2);
    return 0;
}
