#include<iostream>
using namespace std;
class Bank
{
    public:
    virtual void interest()
    {
        cout<<"Interest of value is:";
    }
};
class SBI:public Bank
{
    public:
    void interest() override
    {
        cout<<"The intrest value is:50"<<endl;
    }
};
class HDFC:public Bank
{
    public:
    void interest()
    {
        cout<<"The interest value is:60"<<endl;
    }
};
int main()
{
    Bank*b;
    SBI s;
    HDFC h;

    b=&s;
    b->interest();

    b=&h;
    b->interest();
    return 0;
}