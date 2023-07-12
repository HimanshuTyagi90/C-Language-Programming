#include<iostream>
using namespace std;

class City
{
    char name[30];

    public:

    void getname()
    {
        cin.getline(name,30);
    }

    void display(char ch)
    {
        if(name[0]==ch)
        {
            cout<<name<<endl;
        }
    }
};

int main()
{
    City c[10];

    cout<<"enter 10 city's name:"<<endl;

    for(int i=0;i<10;i++)
    {
        cout<<i+1<<"th city:";
        c[i].getname();
    }

    char a;
    cout<<"enter first character of city : ";
    cin>>a;

    for(int i=0;i<10;i++)
    {
        c[i].display(a);
    } 
    return(0);
}
