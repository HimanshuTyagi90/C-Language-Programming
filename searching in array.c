#include<stdio.h>

int main()
{
	int i,num,arr[100],item;
	printf("program for searching(linear search) and knowing the index number of array element\n\n");
	printf("enter array size :\n");
	scanf("%d",&num);
	printf("enter %d elements\n",num);
	for(i=0;i<num;i++)
	{
		printf("enter the %d elements ",i+1);        
		scanf("%d",&arr[i]);
	}
	
	printf("enter the element to search \n");
	scanf("%d",&item);
	
	for(i=0;i<num;i++)
	{
		if(arr[i]==item)
		{
			printf("%d is present in the array\nIs at position %d\nindex value of this element is %d\n",arr[i],i+1,i);
	  break;
}
 
 	if(i==num)
 	printf("%d is not present in array.\n",item);
}
   return(0);
}
