#include<iostream>
// #include<cconio>

using namespace std;

class Number
{
    int a,b;

    public:

    void get_data()
    {
        cout<<"Enter two numbers: "<<endl;
        cin>>a>>b;
    }

    int power(int x, int n)
    {
        if(n==0)
        {
            return(1);
        }
        else
        {
            return(x*power(x,(n-1)));
        }
    }
    
    void show(void)
    {
        get_data();

        int n=power(a,b);
        cout<<"Value of Number A raise to the power B is : "<<n<<endl;
    }
};

int main()
{
    Number Obj;

    Obj.show();
    return(0);
}
