#include<iostream>
#include<math.h>
using namespace std;

class MathTab
{
	public:   
    int number;
    long sqr;
    float sqrot;
    double loge;

    public:

    void findsqr()
    {
        sqr=number*number;
    }

    void findsqrt()
    {
        sqrot= sqrt(number);
    }

    void findlog()
    {
        loge= log(number);
    }

    void display()
    {
        cout<<"   "<<number<<"   "<<sqrot<<"   "<<sqr<<"   "
        <<loge<<endl;
    }
};


int main()
{
    int lb,ub,num;

    cout<<"Enter lower bound: "<<endl;
    cin>>lb;

    cout<<"Enter Upper bound: "<<endl;
    cin>>ub;

    num= ub-lb;

    MathTab obj[num];

    for(int i=0;i<num;i++)
    {
        while (lb<ub)
        {
            obj[i].number=lb;
            lb++;
        }
        
    }

    for(int j=0;j<num;j++)
    {
        obj[j].findsqrt();
        obj[j].findsqr();
        obj[j].findlog();
    }

    for(int k=0;k<num;k++)
    {
        obj[k].display();
    }

    return(0);
}
