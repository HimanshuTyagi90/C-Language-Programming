#include<iostream>

using namespace std;

class Student
{
    char name[20];
    char fathername[20];
    char classname[20];
    char percentage [20];

    public:

    void dataentery()
    {
        cout<<endl<<endl;
        cout<<"enter name:";
        cin.getline(name,20);
        cout<<"enter father's name:";
        cin.getline(fathername,20);
        cout<<"enter class name in words:";
        cin.getline(classname,20);
        cout<<"enter percentage in words:";
        cin.getline(percentage,20);
    }

    void showdetails()
    {
        cout<<endl<<endl<<"Student Detail: "<<endl<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Father'sName : "<<fathername<<endl;
        cout<<"Class : "<<classname<<endl;
        cout<<"Percentage: "<<percentage<<endl;
    }
};

int main()
{
    Student std1;
    std1.dataentery();
    std1.showdetails();
    return(0);
}
