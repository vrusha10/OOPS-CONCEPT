#include <iostream>
using namespace std;
class Vrushabh {
public:
    void fun1(int x ,int y) {
        cout<<" x+y= "<<x+y<<endl;
    }
};
class Dhadve : public Vrushabh{
    public:
    void fun1(int x, int y)
    {
        cout<<" x+y= "<<x+y <<endl;
    }
};

int main()
{
   Dhadve v;
    v.fun1(10,20);
}
