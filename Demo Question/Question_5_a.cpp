#include<iostream>
using namespace std;
class Student
{
    public:
    virtual void display()
    {
        cout<<"Student class section:";
    }
};
class UG: public Student
{
    public:
    void display() override
    {
        cout<<"This is the UG section";
    }
};
class PG: public Student
{
    void display()
    {
        cout<<"This is the PG section";
    }
};
int main()
{
    Student *s;
    UG  u;
    PG p;
    s=&u;
    s->display();
    s=&p;
    s->display();
    return 0;
}