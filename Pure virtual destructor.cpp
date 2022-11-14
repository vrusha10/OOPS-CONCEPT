Pure virtual destructor in C++

Destructor can be declared as pure virtual.
Once the destructor is made as pure virtual, then the destructor body needs to be provided.
This is because, for destructor, they will not be overridden in derived class, but they will be called in the reverse order.
Hence you need to provide destructor body for pure virtual destructor.




#include <iostream> 
using namespace std;
class Base 
{ 
public: 
    Base() 
    { 
        cout<<"Constructor Base "<<endl; 
    } 
virtual ~Base() = 0; // pure virtual destructor 

};

Base::~Base() 
{ 
    cout<<"Destructor Base "<<endl; 
}


class Derived: public Base 
{ 
public: 
    Derived() 
    { 
        cout<<"Constructor Derived "<<endl; 
    } 

    ~Derived() 
    { 
        cout<<"Destructor Derived "<<endl; 
    } 
}; 

int main(void) 
{

// create a derived class object
    Derived *d = new Derived; 

//assign it to base class pointer
    Base *b = d; 

//delete derived class object
    delete b;
}
