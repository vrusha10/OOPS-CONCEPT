#include <iostream>

using namespace std;
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int (*funptr)(int,int);
    funptr=add;
    int sum=funptr(10,20);
    cout << "Sum= " <<sum<< endl;
}
