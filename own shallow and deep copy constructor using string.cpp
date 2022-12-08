#include <iostream>
#include<string.h>
using namespace std;
class Myclass
{
    char *name;
public:
    Myclass(const char *n)
    {
        cout<<"Construor"<<endl;
        name=new char[16];
        strcpy(name,n);
    }
    Myclass(const Myclass&obj)
    {
        cout<<"Copy Construor"<<endl;
        name=new char[16];
        strcpy(name,obj.name);
    }

    void concatenate(const char *n)
    {
        strcat(name,n);
    }
    void fun()
    {
        cout<<name<<endl;
    }
};

int main()
{
    Myclass m1("ABC");
    Myclass m2=m1;
    m1.fun();
    m2.fun();
    m1.concatenate("EFG");
    m1.fun();
    m2.fun();
}
