#include<iostream>
// #include<cconio>

using namespace std;

class Palindrom
{
    int num;

    public:

    void get_data()
    {
        cout<<"Enter number: "<<endl;
        cin>>num;
    }

    void ispalindrom()
    {
        get_data();

        int q=num,result=0,rem;

        while (q!=0)
        {
            rem=q%10;
            result = result*10+rem;
            q=q/10;
        }

        if(result==num)
           cout<<"Number is Palindrome "<<endl;
        else
           cout<<"Number is not a Palindrome "<<endl;
        
    }
};

int main()
{
    Palindrom obj;
    obj.ispalindrom();
    return(0);
}
