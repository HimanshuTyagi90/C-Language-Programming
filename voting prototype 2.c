#include<stdio.h>
#include<conio.h>

int c;
long winner(int arr[20],int n,int h)
{
    int sum=0;
    int i=1;
    do
    {
        if(i!=h)
        sum=sum+(c[i].per.percentage/100*arr[i]);
        i++;
    }while(i<=n);
    return(sum);
}

long lossers(int arr[20],int n,int h)
{
    int i=1,j;
    do
    {
        if(i!=h)
        j=(c[i].per.percentage/100*arr[i]);
        c[i].mulvote.votes=(arr[i]-j);
        i++;
    }while(i<=n);
}
  /*
      maybe helpful in future.....

int manu(int *c1.vote.votes;int *c2.vote.votes;int *c3.vote.votes;int *c4.vote.votes;int *c5.vote.votes;int *c6.vote.votes;int *c7.vote.votes;int *c8.vote.votes;int *c9.vote.votes;int *c10.vote.votes;int *c11.vote.votes;int *c12.vote.votes;int *c13.vote.votes;int *c14.vote.votes;int *c15.vote.votes;int *c16.vote.votes;int n)
{
    int sum=0;
    for(int i=1,i<=n;i++)
    {
      sum=sum+c[i].vote.votes;
    }
    *a=sum;

}*/

int  totalvotes(int arr[20],int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+arr[i];
    }
    return(sum);
}

int main()
{
    int arr[20];
    struct candidate
    {
        int id;
        char name[10];
        char party[10];

    };

    struct vote
    {
      int votes;
    };

     struct mulvote
    {
      int votes;
    };

    struct per
    {
        int percentage;
    };

    // functional part...
    int a,b,n,h,y;
    char charachter;
    struct candidate c[20];
    struct per c[20];
    struct mulvote c[20];
    struct vote c[20];

    printf("This is a voting system prototype written by Himanshu Tygai----->>>>\n\n");
    printf("Enter total number of candidates");
    scanf("%d",&n);

    printf("---------------------Add candidates------------------------");
    int i=1;
    do
    {
         printf("---------------------Enter Data of candidates %d------------------------",i);
         printf("enter candidate %d's id\n",i);
      scanf("%d",&c[i].candidate.id);
      printf("enter candidate %d's name\n",i);
      scanf("%s",c[i].candidate.name);
      printf("enter %s party name\n",c[i].candidate.name);
      scanf("%s",c[i].candidate.party);
        i++;
    } while (i<=n);

    for (i=1;i<=n;i++)
    {
        printf("We have :");
        printf(" %d",c[i].candidate.id);
        printf(" %s",c[i].candidate.name);
        printf(" %s \n",c[i].candidate.party);
        }
     printf("press 010 to exit");
    printf("Press your choice's respective id to vote:-->>>\n\n");
    scanf("%d",&a);
     i=1;
     do{
        if(c[i].candidate.id==a)
        {
            c[i].vote.votes++;
            printf(" Your vote has been casted, You have voted for %s ",c[i].candidate.name);
        }
        i++;
     }while(a!=010);

int tv=totalvotes(arr[20],n);


    printf("\nTotal votes =%d\n",tv);

    for(i=0;i<n;i++)
        arr[i]=c[i].vote.votes;

    printf("do you want to show results? press Y for yes and N for no:-->>>\n\n");
    getc(charachter);

    if(charachter==y)
    {
     printf("which result you want to show S or M ?\n press 1 for S 2 for Manup r.\n");
     scanf("%d",&b);

     if(b==1)
     {
     for (i=1;i<=n;i++)
    {
        printf("Candidate Id Name Party Votes\n");
        printf(" %d",c[i].candidate.id);
        printf(" %s",c[i].candidate.name);
        printf(" %s",c[i].candidate.party);
        printf(" %d \n",c[i].vote.votes);
        }
    }
    if(b==2)
    {
      printf("Sir here I want additional information from you for my operation\n");
      printf("Candidate Id to help:\n");
      scanf("%d",&h);

      for(i=1;i<=n;i++)
      {
      printf("enter percentage of votes that should be cut offed of candidate %d",i);
      scanf("%d",&c[i].per.percentage);
      }



    c[h].mulvote.votes=winner( arr[20],n,h);


    lossers(arr[20],n,h);


    //printing manu results.....

    for (i=1;i<=n;i++)
    {
        printf("Candidate Id Name Party Votes\n");
        printf(" %d",c[i].candidate.id);
        printf(" %s",c[i].candidate.name);
        printf(" %s",c[i].candidate.party);
        printf(" %d \n",c[i].mulvote.votes);
        }

}

return(0);
}
}
