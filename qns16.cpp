#include<iostream>
#include<conio.h>
using namespace std;

class Number
{
    protected:
    int a;

    public:

    void getnum(int n)
    {
        a=n;
    }

    void printInt()
    {
        cout<<"\nentered deciaml number:";
        cout<<a<<endl;
    }
};

class Octal : public Number
{
    int octal[20];

    public:

    void printOctal()
    {

        int num=a,i;
        for( i=0;num>0;i++)
        {
            octal[i]=num%8;
            num=num/8;
        }

        cout<<"\nEquivalent Octal Number: ";
        for(int j=(i-1);j>=0;j--)
        {
            cout<<octal[j];
        }
    }
};


class Binary : public Number
{
    int Binary[20];

    public:

    void printBinary()
    {

        int num=a,i;
        for(i=0;num>0;i++)
        {
            Binary[i]=num%2;
            num=num/2;
        }

        cout<<"\nEquivalent Binary Number: ";
        for(int i=i-1;i>=0;i--)
        {
            cout<<Binary[i];
        }
    }
};

int main()
{
    int a;

    Number num1;
    cout<<"enter decimal number: ";
    cin>>a;
    num1.getnum(a);
    num1.printInt();

    Octal num2;
    num2.printOctal();

    Binary num3;
    num3.printBinary();
	getch();
    return(0);
}

