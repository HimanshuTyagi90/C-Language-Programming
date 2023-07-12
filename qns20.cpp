#include<iostream>
using namespace std;

class Distance
{
    int feet;
    int inches;

    public:

    Distance()
    {
        feet=inches=0;
    }
    
    void getdistance(int x, int y)
    {
        feet=x;
        inches=y;
    }

    Distance adddistance(Distance x)
    {
        Distance temp;

        temp.feet= feet + x.feet;
        temp.inches =   inches + x.inches;

        // int reminch;

        if(inches>=12)
        {
            if (inches==12)
            {
                feet++;
                inches=0;
            }

            if(inches>12)
             {
                     temp.feet = inches/12;
                     inches = inches % 12;

                 if(inches<0)
                 {
                     temp.inches=0;
                 }
                 
             }
        }

        return(temp);
    }


    void show(void)
    {
        cout<<"Total distance is: ";
        cout<<feet<<" feet "<<inches<<" inches "<<endl;
    }
};

int main()
{
    Distance obj[2],sum;
    int a,b;
    cout<<"enter the data :\n";
    for(int i=0;i<=1;i++)
    {
        cout<<"enter data of obj "<<i+1<<endl;
        cin>>a;
        cin>>b;
        obj[i].getdistance(a,b);

    }
    
    sum= obj[0].adddistance(obj[1]);

    cout<<"obj1's ";
    obj[0].show();
    cout<<"obj2's ";
    obj[1].show();
    cout<<"\nobj1 + obj2's sum : "<<endl;
    sum.show();

    return(0);
}
