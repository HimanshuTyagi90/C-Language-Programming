#include<iostream>
using namespace std;

float area(int r)
{
    float ar;
    ar=3.14*r*r;
    return(ar);
}

int area(float n,int b,int h)
{
    float ar;
    ar=n*b*h;
    return(ar);
}

float area(int l, float b)
{
    float ar;
    ar=l*b;
    return(ar);
}


int main()
{
    cout<<"Area of Circle: ";
    cout<<area(4.0);
    cout<<"\n Area of Triangle: ";
    cout<<area(0.5,4,6);
    cout<<"\n Area of Ractangle: ";
    cout<<area(6,4.2);
    return(0);
}
