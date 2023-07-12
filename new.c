#include <stdio.h>
#include<conio.h>

int main()
{
    int n,i,j,k,l,a,b,sum,r,fact;

    printf("Enter the lower range:");
    scanf("%d",&a);
    printf("enter the upper range:");
    scanf("%d",&b);

    for(int i=a;i<=b;i++)
    {
        k=i;
        l=i;
        sum=0;
        fact=1;
    while(k!=0)
    {
        fact=1;
        r=k%10;
        k=k/10;
        for(j=1;j<=r;j++)
            fact=fact*j;
        sum=sum+fact;
    }
    if(sum==l)
        printf("\n %d ",i);
    }
    return(0);
     }
