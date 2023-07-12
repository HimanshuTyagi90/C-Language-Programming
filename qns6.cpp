#include<iostream>

using namespace std;
class Armstrong {
	public:
		int n1,n2;
		void getdata()
		{
		
			cout<<"\n enter lower bound and upper bound:";
			cin>>n1>>n2;
			
		}
		void armstrong ()
		 {
		 cout<<"Armstrong numbers between %d an %d are: "<< n1<<":" <<n2;
  for (int i=n1; i<n2; ++i)
  {
     	int  temp=i;
       int num=0;
       int rem;
      while(temp!=0)
      {
          rem=(temp%10);
          num+=rem*rem*rem;
          temp/=10;
      }
      if(i==num)
      {
          cout<<"  "<<i;
      }
  }
}
};
int main()
{
	Armstrong obj;
	obj.getdata();
	obj.armstrong();
	
	return 0;
	
}
