#include<iostream>
using namespace std;

class Vehical
{
    public:
    virtual void ShowSpeed()
    {
        cout<<"The speed of vehical is:";
    }
};

class Car : public Vehical
{
    public:
    void ShowSpeed()
    {
        cout<<"The speed of car is : 120km/hr"<<endl;

    }
};

class Bike : public Vehical
{
    public :
    void ShowSpeed()
    {
        cout<<"The speed of bike is: 80 km/hr"<<endl;

    }
};

int main()
{
    Vehical* v;
    Car c;
    Bike b;

    v = &c;
    v->ShowSpeed();

    v = &b;
    v->ShowSpeed();
    
}