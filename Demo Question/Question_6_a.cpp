#include<iostream>
using namespace std;
class Appliance
{
    public:
    virtual void power()
    {
        cout<<"Power of Appliance:"<<endl;
    }
};
class Fan:public Appliance 
{
    public:
    void power() override
    {
        cout<<"Power of fan";
    }
};
class AC:public Appliance
{
    public:
    void power()
    {
        cout<<"Power of AC:";
    }
};
int main()
{
    Appliance *A;
    Fan F;
    AC C;

    A=&F;
    A->power();

    A=&C;
    A->power();
    return 0;
}