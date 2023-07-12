#include<stdio.h>
#include<conio.h>

int main()
{

    int a,b,c,d,e;
    float per;
    printf("\n enter marks in 5 subjects:\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    per=(float)(a+b+c+d+e)/5;

    if(per>=60)
    {
        printf("\n first division %.2f percent",per);

    }
     else
        {
            if(per>=50)
            {
                 printf("\n second division %.2f percent",per);
            }
            else
            {
                if(per>=40)
                {
                     printf("\n third division %.2f percent",per);
                }
                else
                {
                    if(per<40)
                    {
                        printf("\n fail %.2f percent",per);
                    }
                }
            }
        }

    getch();
    return(0);
}
