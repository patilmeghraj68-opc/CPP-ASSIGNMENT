#include<iostream>
using namespace std;

class Animal
{
    public:
    virtual void sound()
    {
        cout<<"The Sound of Animal is:";
    }
};
class Dog:public Animal
{
    public:
    void sound() override
    {
        cout<<"The sound of Dog is: Bark";
    }
};
class Cat:public Animal
{
    public:
    void sound()
    {
        cout<<"The sound of Cat is: Memow";
    }
};
int main()
{
    Animal*A;
    Dog d;
    Cat c;

    A=&d;
    A->sound();

    A=&c;
    A->sound();

    return 0;
}
