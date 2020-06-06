Q12. Quadrants in which coordinates lie

#include <stdio.h>
void quad(int a, int b)
{
    if(a>0 && b>0)
    {
        printf("Ist Quadrant");
    }
    else if(a<0 && b>0)
    {
        printf("IInd Quadrant");
    }
    else if(a<0 && b<0)
    {
        printf("IIIrd Quadrant");
    }
    else if(a>0 && b<0)
    {
        printf("IVth Quadrant");
    }
    else{
        printf("Origin");
    }

}

int main()
{
    int m,n;
    printf("Enter Coordinates: ");
    scanf("%d %d",&m,&n);
    printf("\n");
    quad(m,n);
    return 0;
}
