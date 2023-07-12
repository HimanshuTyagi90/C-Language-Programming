#include<stdio.h>
#include<conio.h>

int main()
{
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k;
    printf("This is a voting system prototype written by Himanshu Tygai----->>>>\n\n");
    printf("1.Candidate One\n2.Candidate Two\n3.Candidate Three\n4.Candidate Four\n5.Candidate Five\n6.Candidate Six\n7.Candidate Seven\n8.Candidate Eight\n9.Candidate Nine\n10.Candidate Ten\n11.Nota(exit)\n\n");

    printf("Press key for your choice's respective number:-->>>\n\n");
    rep:
    scanf("%d",&k);
    switch(k)
    {
        case 1:a++;
        goto rep;
        case 2:b++;
        goto rep;
        case 3:c++;
       goto rep;
        case 4:d++;
       goto rep;
        case 5:e++;
        goto rep;
        case 6:f++;
       goto rep;
        case 7:g++;
       goto rep;
        case 8:h++;
        goto rep;
        case 9:i++;
       goto rep;
        case 10:j++;
      goto rep;
        case 11:break;

    }

    printf("Candidate One: %d Vote\nCandidate Two %d Vote\nCandidate Three: %d Vote\nCandidate Four: %d Vote\nCandidate Five: %d Vote\nCandidate Six: %d Vote\nCandidate seven: %d Vote\nCandidate Eight: %d Vote\nCandidate Nine: %d Vote\nCandidate Ten: %d Vote",a,b,c,d,e,f,g,h,i,j);
    printf("\n\nTotal votes casted = %d",a+b+c+d+e+f+g+h+i+j);

return(0);
}
