#include <iostream>
using namespace std;
class Fruits
{
protected:
    int a;
public:
    void fun()
    {
        cout<<"enter a"<<endl;
        cin>>a;
    }
};
class Banana:public virtual Fruits
{
protected:
    int b;
public:
    void fun1()
    {
        cout<<"enter b"<<endl;
        cin>>b;
    }
};
class Orange:public virtual Fruits
{
protected:
    int c;
public:
    void fun2()
    {
        cout<<"enter c"<<endl;
        cin>>c;
    }
};
class Apple:public Banana,public Orange
{
    int total;
public:
    void display()
    {
        total=a+b+c;
        cout<<"Total= "<<total<<endl;
    }
};

int main()
{
   Apple a;
   a.fun();
   a.fun1();
   a.fun2();
   a.display();
}
