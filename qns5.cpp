#include<iostream>
using namespace std;




class Binarysearch
{
    int num;
    int arr[10];
    int first=0,last=9;
    int mid,data,i;

    public:

    void get_data()
    {
        i=0;
        cout<<"\n enter the values of array elements : "<<endl;
        while (i<10)
        {
            cout<<"\nenter "<<i+1<<"th number :";
            cin>>arr[i];
            i++;
        }

        cout<<endl<<"enter value to search: ";
        cin>>data;
    }


   /*    optional sorting method 

    void ascendsort()
    {
        //insertion sort
       int temp,j;
        for(int i=0;i<10;i++)
        {
            temp=arr[i];
            j=(i-1);

            while (j>=0 and arr[j]>temp)
            {
                arr[j+1]=arr[j];
                j--;
            }
            
            arr[j+1]=temp;
        }
    }

    */

    void printarray()
    {
        cout<<endl;
        for(int i=0;i<10;i++)
        cout<<" "<<arr[i];
    }

    void binarysearch()
    {
        while (first<=last)
        {
           mid=(first+last)/2;
           
           if(data>arr[mid])
           {
               first=mid+1;
           }
           else if(data == arr[mid])
           {
               cout<<endl<<"\nelement found at "<<mid+1<<"th position"<<endl;
               break;
           }
           else
           {
               last=mid-1;
           }

           if(first>last)
           cout<<data<<"\n is not present in array"<<endl;
        }
        
    }
};

int main()
{
    Binarysearch obj;
    obj.get_data();
    //obj.ascendsort();  optinal call for sorting
     obj.printarray();     
    obj.binarysearch();
    return(0);
}
