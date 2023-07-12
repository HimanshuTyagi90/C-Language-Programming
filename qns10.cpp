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

    void printOctal()
    {
        int n=number;
        int i;
        for(i=0;n>0;i++)
        {
            arr[i]=n%8;
            n=n/8;
        }

        cout<<"Octal of given number: ";

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
    obj.printOctal();
    return(0);
}
