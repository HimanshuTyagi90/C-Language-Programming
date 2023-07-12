#include<iostream>
using namespace std;
class Test{
	 int code;
	 static int count;
	 
	 public:
	 	void setcode()
	 	{
	 		code=++count;
	 		
		 }
		 void showcode()
		 {
		 	cout<<"\n object number :"<<code;
		 	
		 }
		 static void show_count()
		 {
		 	cout<<"\n count"<<count;
		 	
		 }
};

int Test::count;
int main()
{
	Test obj1,obj2;
	obj1.setcode();
	obj2.setcode();
	Test::show_count();
	
	Test obj3;
	obj3.setcode();
	
	Test::show_count();
	
	obj1.showcode();
	obj2.showcode();
	obj3.showcode();
	
	return 0;
	
}

