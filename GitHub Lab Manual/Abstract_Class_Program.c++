#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0; // Pure virtual function
};

class Rectangle : public Shape
{
    float length, width;

public:
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }

    void area()
    {
        cout << "Area of Rectangle = " << length * width << endl;
    }
};

class Circle : public Shape
{
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    void area()
    {
        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }
};

int main()
{
    Shape *s1, *s2;

    Rectangle rect(10, 5);
    Circle circ(7);

    s1 = &rect;
    s2 = &circ;

    s1->area();
    s2->area();

    return 0;
}