Q11. Maximum number of handshakes

#include <stdio.h>

int main()
{
    int n,sum;
    printf("Enter number of students: ");
    scanf("%d",&n);
    sum=(n*(n-1))/2;
    printf("Total handshakes are: %d", sum);
    return 0;
}
