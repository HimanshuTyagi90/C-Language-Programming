#include<iostream>
using namespace std;

class conversion{
	 int num;
	 char hex[100];
	 public:
	 	void getdata()
	 {
	 	cout<<"\n enter a number:";
	 	cin>>num;
	 }
	void printhexadecimal()
	{
	  int temp=num;
	  int  r,j ;
	  int i=1;
  while (temp != 0)
    {
        r = temp % 16;
        if (r < 10)
            hex[i++] = r + 48;
        else
            hex[i++] = r + 55;
        temp = temp / 16;
    }
    cout << "\nHexadecimal equivalent "<< " is :";
    for (i= i-1; i > 0; i--)
        cout << hex[i];
    
}
};
int main()
{
	conversion obj;
	obj.getdata();
	obj.printhexadecimal();
	
	return 0;
	
}
