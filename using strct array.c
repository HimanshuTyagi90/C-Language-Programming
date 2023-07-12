#include<stdio.h>
#include<string.h>



int main()
{

 struct employee
{

   int id;
   char name[50];
   float salary;
}e1,e2;

  printf("enter the detail of 1st employee:\n");
  printf("id:");
  scanf("%d",&e1.id);
  printf("name:");
  gets(e1.name);
  printf("\nsalary:");
  scanf("%f",&e1.salary);

  printf("\n\nenter the detail of 2nd employee:\n");
  printf("id:");
  scanf("%d",&e2.id);
  printf("name:");
  gets(e2.name);
  printf("salary:");
  scanf("%f",&e2.salary);

  //output
  printf("\n\n1st employee\n");
  printf("id:%d\n",e1.id);
  printf("name:%s\n",e1.name);
  printf("salary:%.2f\n",e1.salary);

  printf("\n\n2nd employee\n");
  printf("id:%d\n",e2.id);
  printf("name:%s\n",e2.name);
  printf("salary:%.2f\n",e2.salary);

  return(0);
   }
