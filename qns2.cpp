#include<iostream>
// #include<cconio>

using namespace std;

class Armstrong
{
    long num;

    public:

    void getdata()
    {
        cout<<"\n enter a number:";
        cin>>num;
    }

    long armstrong()
    {
        long rev=0,d,n;
        n=num;

        while (num>0)
        {
            d=num%10;
            rev=rev+(d*d*d);
            num=num/10;
        }
        if(n==rev)
        {
        	cout<<" is Armstrong Number:\n";
		}
		else
		{
			cout<<"is not Armstrong Number:\n ";
		}

    }
};

int main()
{
    Armstrong obj;

    obj.getdata();
    obj.armstrong();
    return(0);
}
