#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,i,n;
    printf("\n enter value of range A and B:\n");
    scanf("%d %d",&a,&b);
    for(n=a;n<=b;n++)
    {
        for(i=2;i<n;i++)
        {
          if(n%i==0)
          {
              break;
          }
        }
        if(n==i)
            printf("\n %d",n);
    }
    getch();
    return(0);
}
