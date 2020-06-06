Q15. Permutations in which n people can occupy r seats in a theatre

#include <stdio.h>

int main()
{
    int m,n,i,j,p;
    int fact1=1,fact2=1;
    printf("Enter number of person and number of rows: ");
    scanf("%d %d",&m,&n);
    printf("\n");

    for(i=1;i<=m;i++)
    {
        fact1=fact1*i;
    }
    for(j=1;j<=(m-n);j++)
    {
        fact2=fact2*j;
    }
    p=(fact1/fact2);
    printf("\nnumber of possible ways are: %d",p);
    return 0;
}
