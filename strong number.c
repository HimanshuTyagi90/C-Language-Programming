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
    int n,k,r,sum=0;

    printf("Enter a number:");
    scanf("%d",&n);
    k=n;
    while(k!=0)
    {
        r=k%10;
        k=k/10;
         int f=fact(r);
        sum=sum+f;
    }
    if(sum==n)
    {
        printf("\n %d is a strong number",n);
    }
    else
    {
        printf("\n %d is not a strong number",n);
    }
}
