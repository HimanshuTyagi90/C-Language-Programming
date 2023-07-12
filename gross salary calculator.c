#include<stdio.h>
#include<conio.h>
void main()
{  float GS,BS,DA,HRA;
    printf("\n enter the basic salary\n");
    scanf("%f",&BS);

    if(BS<2000)
    { HRA=BS*0.15;
      DA=BS*0.8;
      }
      else
      {
        if(BS>=2000)
        HRA=500;
        DA=BS*0.95;
        }
      GS=BS+HRA+DA;
      printf("\n THE GROSS SALARY IS %.2f",GS);
      getch();
      }

