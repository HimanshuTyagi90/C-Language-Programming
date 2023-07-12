#include<stdio.h>
#include<conio.h>

float calculatesum(float age[])
{
    int i;
    float sum=0;
    for(i=0;i<6;i++)
    {
        sum=sum+age[i];
    }
    return (sum);
}
int main()
{
  float result, age[]={23.4,55,22.6,3,40.5,18};

  // complete array age is passed to the function calculatesum.
  result=calculatesum(age);
  printf("\n the sum is %.2f",result);
   return(0);
}
