#include <iostream>
using namespace std;
class base
{public:
    virtual void display()
    {
        cout<<"This is Base";
    }
};
class child: public base{
    void display()
    {
        cout <<"This is child";
    }
};
int main() {
  base *b;
  child c;
  b=&c;
  b->display();

    return 0;
}
