#include<stdio.h>
#include<conio.h>
void main()
{ char a;
  printf("\n enter the character.\n");
  scanf("%c",&a);
  if(a>96&&a<123)
   printf("\n %c is a lower case alphabet.",a);
   else
   { if(a>64&&a<90)
   printf("\n %c is a upper case alphabet.",a);
   else
    printf("\n invalid input for this proram.");
   }
   getch();
   }
