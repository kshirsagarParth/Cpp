#include<iostream>
using namespace std;

class Base{
public : 
      virtual  void display()
         { cout<<"This is base class"<<endl;
	}
};

class Derived : public Base
{
public : 
         void display()
         { cout<<"This is derived class"<<endl;
	}
};

int main()
{
 Base b;
 Derived d;
 
 Base *ptr_b;
 ptr_b=&d;

 ptr_b->display();
 return 0;
}
