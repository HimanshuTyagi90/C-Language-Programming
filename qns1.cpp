#include<iostream>
// #include<cconio>

using namespace std;

class Sum
{
  int num;

  public:

  void get_data(int x)
  {
      num=x;
  }

  int sum(void)
  {
      int n,d,sum=0;
      n=num;

      while (n>0)
      {
          d=n%10;
          sum=sum+d;
          n=n/10;
      }

      return(sum);
  }
};


int main()
{
    int n;

    cout<<"Enter the number: "<<endl;
    cin>>n;

    Sum obj;
    obj.get_data(n);
    n=obj.sum();

    cout<<"sum of digits of this number is: "<<n<<endl;
    // getch();
    return(0);
}
