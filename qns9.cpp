#include<iostream>
using namespace std;

class Conversion
{
    int number;
    int arr[20];

    public:

    void getnumber()
    {
        cout<<"enter number:";
        cin>>number;
    }

    void printBinary()
    {
        int n=number;
        int i;
        for(i=0;n>0;i++)
        {
            arr[i]=n%2;
            n=n/2;
        }

        cout<<"Binary of given number: ";

        for(i=i-1;i>=0;i--)
        {
            cout<<arr[i];
        }
    }
};

int main()
{
    Conversion obj;
    obj.getnumber();
    obj.printBinary();
    return(0);
}
