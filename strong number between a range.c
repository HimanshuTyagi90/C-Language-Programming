
#include <stdio.h>
#include<conio.h>

int fact(int r)
{
    int mul=1;
    for(int i=1;i<=r;i++)
    {
        mul=mul*i;
    }
    return mul;

}
void main()
{
    int a,b,n,k,r,sum;

    printf("Enter lower range number:");
    scanf("%d",&a);

    printf("Enter upper range number:");
    scanf("%d",&b);

    for(int i=a;i<=b;i++)
    {
        sum=0;
        k=i;
       int l=i;
    while(k!=0)
    {
        r=k%10;
        k=k/10;
        int f=fact(r);
        sum=sum+f;
    }

    if(sum==l)
    {
        printf("\n %d is a strong number",i);
    }
    else
    {
        printf("\n %d is not a strong number",i);
    }
    }
}
