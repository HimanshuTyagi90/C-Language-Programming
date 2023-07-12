#include<stdio.h>
#include<conio.h>

int main()
{
	int i,first,mid,last,size,element,list[50];
	
	printf("[\n\nprogram for binary searching--->>>\n\n]");
	printf("enter the array size\n");
	scanf("%d",&size);
	
	printf("enter  %d elements in ascending order\n",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&list[i]);
	}
	
	printf("enter the element to be searched\n");
	scanf("%d",&element);
	
	first=0,last=size-1;
	mid=(first+last)/2;
	
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
	getch();
	return(0);
}
