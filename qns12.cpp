#include<iostream>
using namespace std;

class Date
{
    int date;
    int month;
    int year;

   public:

    Date()
    {
        date=0;
        month=0;
        year=0;
    }

    Date(int x, int y, int z)
    {
        date=x;
        month=y;
        year=z;
    }
 
    void numberfunction()
    {
        cout<<endl<<date<<"/"<<month<<"/"<<year<<endl;
    }
};

int main()
{
    Date obj1,obj2(13,03,2000),obj3;
    
    int a,b,c;
    cout<<"enter date: ";
    cin>>a;
    cout<<"enter month: ";
    cin>>b;
    cout<<"enter year: ";
    cin>>c;
    obj1.numberfunction();
    obj2.numberfunction();
    obj3=Date(a,b,c);        //explict call to constructor
    obj3.numberfunction();
    return(0);
}
