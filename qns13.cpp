#include<iostream>
using namespace std;

class Complex
{
    float x; // real part
    float y; // imaginary part

    public:

    Complex()
    {
        x=0;
        y=0;
    }

    Complex(float a, float b)
    {
        x=a;
        y=b;
    }

    Complex operator+ (Complex c)
    {
        Complex temp;
        temp.x=x+c.x;
        temp.y=y+c.y;

        return(temp);
    }

    Complex operator- (Complex c)
    {
        Complex temp;
        temp.x=x-c.x;
        temp.y=y-c.y;

        return(temp);
    }

    
    Complex operator* (Complex c)
    {
        Complex temp;
        temp.x=x*c.x;
        temp.y=y*c.y;

        return(temp);
    }

    void display()
    {
        cout<<endl<<"Real = "<<x<<endl;
        cout<<endl<<"Imaginary = "<<y<<endl;
    }

};


int main()
{
    Complex c1(4,6), c2(5,9);
    Complex sum,sub,mul;

    sum=c1+c2;
    sub=c1-c2;
    mul=c1*c2;

    cout<<endl<<"Sum : "<<endl;
    sum.display();
    cout<<endl;

    cout<<endl<<"Sub : "<<endl;
    sub.display();
    cout<<endl;

    cout<<endl<<"MUl : "<<endl;
    mul.display();
    cout<<endl;

    return(0);
}
