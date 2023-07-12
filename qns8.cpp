#include<iostream>
using namespace std;

class Temp
{
    float fahrenheit;
    float celsius;

    public:

    void inputtemp()
    {
        cout<<"Enter temprature in fahrenheit:"<<endl;
        cin>>fahrenheit;
    }

    void converttemp()
    {
        celsius=(fahrenheit-32)*5/9;
    }

    void show()
    {
        cout<<"Temprature in fahrenheit:---"<<endl;
        cout<<fahrenheit<<endl;
        cout<<"Temprature in Celsius:---"<<endl;
        cout<<celsius<<endl;
    }
};

int main()
{

    Temp obj;
    obj.inputtemp();
    obj.converttemp();
    obj.show();
    return(0);
}
