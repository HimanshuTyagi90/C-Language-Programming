#include<iostream>
using namespace std;
class Beta; 
class Alpha
{
    int data;

    public:
    
    Alpha()
    {
        data=25;
    }

    friend int sum(Alpha a, Beta b);
};

class Beta
{
    int data;

    public:

    Beta()
    {
        data=35;
    }

    friend int sum(Alpha a, Beta b);
};

int sum(Alpha a, Beta b)
{
    return(a.data + b.data);
}


int main()
{
    Alpha x;
    Beta y;

    cout<<"Sum of data is : "<<sum(x,y)<<endl;

    return(0);
}
