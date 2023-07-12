#include<stdio.h>


float distance(float a,float b,float c,float d);
float sqroot(float num);
float main()
{
	float x1,y1,x2,y2,x3,y3;
	float AB,BC,AC,sum=0,i;
	printf("program to check colinearity of three points--->>>\n\n");

 printf("enter cordinates of point A as x1 y1\n\n");
 scanf("%f %f",&x1,&y1);
 
 printf("enter cordinates of point B as x2 y2\n\n");
 scanf("%f %f",&x2,&y2);
 
 printf("enter cordinates of point C as x3 y3\n\n");
 scanf("%f %f",&x3,&y3);

 AB=distance(x1,x2,y1,y2);
 BC=distance(x2,x3,y2,y3);
 AC=distance(x1,x3,y1,y3);
 
 sum=AB+BC;
 
 printf(" AB=%f\n",AB);
 printf(" BC=%f\n",BC);
 printf(" AC=%f\n",AC);
 printf("sum of AB and BC=%f\n",sum);
 
 
 if(AC==sum)
 printf("the points are collinear");
 else
 printf("the points are not collinear");
 getch();
 return(0);
}

// finding distance......
float distance(float a,float b,float c,float d)
{
	float dist,srt;
	dist=((b-a)*(b-a)+(d-c)*(d-c));
	srt=sqroot(dist);
	return(srt);
}
// finding sqrt.....
float sqroot(float num)
{
	//store the half of the given number 
	float sqrt=num/2;
	float temp=0;
	
	// iterate untill sqrt is different of temp, that is updated on the loop
	while(sqrt!=temp)
	{
		temp=sqrt;
		sqrt=(num/temp+temp)/2;
	}
	
	return(sqrt);
	
}
