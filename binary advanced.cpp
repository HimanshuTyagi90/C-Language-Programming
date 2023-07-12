#include<stdio.h>
#include<conio.h>

int main()
{
	int i,first,mid,last,size,element,list[50];
	
	printf("\nprogram for binary searching--->>>\n");
	printf("enter the array size:\n");
	scanf("%d",&size);
	
	printf("enter  %d elements \n",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&list[i]);
	}
	 int n=size-1;
		first=list[0],last=list[n];
	mid=(first+last)/2;

if(first<last)
{

	printf("\nthe list is sorted in Ascending Order\n");
	printf("\nenter the element to be searched\n");
	scanf("%d",&element);
	
    while(first<=last)
	{
		
		if(list[mid]==element)
		{
			printf("element found at index %d\n",mid);
			break;
		}
		else
		{
			if(list[mid]<element)
			{
				first=mid+1;
			}
			else
			{
				last=mid-1;
			}
		}
	}
	
}

else
{
	if(first>last)
{

	printf("\nthe list is sorted in Dscending Order\n");
	printf("enter the element to be searched\n");
	scanf("%d",&element);
	

	
	while(first>=last)
	{
		if(list[mid]==element)
		{
			printf("element found at index %d\n",mid);
			break;
		}
		else
		{
			if(list[mid]<element)
			{
				first=mid+1;
			}
			else
			{
				last=mid-1;
			}
		}
	}
	
}
	
}
	getch();
	return(0);
}
