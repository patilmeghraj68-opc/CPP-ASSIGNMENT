#include <iostream>
using namespace std;

// Compile-time polymorphism (Function Overloading)
class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }

    float add(float a, float b)
    {
        return a + b;
    }
};

// Runtime polymorphism
class Shape
{
public:
    virtual void area()
    {
        cout << "Calculating Area" << endl;
    }
};

class Rectangle : public Shape
{
    int length, width;

public:
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }

    void area()
    {
        cout << "Area of rectangle = " << length * width << endl;
    }
};

class Circle : public Shape
{
    int radius;

public:
    Circle(int r)
    {
        radius = r;
    }

    void area()
    {
        cout << "Area of circle = " << 3.14 * radius * radius << endl;
    }
};

int main()
{
    Calculator calc;

    cout << "--- Compile-Time Polymorphism ---" << endl;
    cout << "Sum of 2 integers: " << calc.add(10, 20) << endl;
    cout << "Sum of 3 integers: " << calc.add(10, 5, 15) << endl;
    cout << "Sum of 2 floats: " << calc.add(2.5f, 3.5f) << endl;

    Shape *s1, *s2;
    Rectangle rect(10, 5);
    Circle circ(7);

    s1 = &rect;
    s2 = &circ;

    cout << "\n--- Run-Time Polymorphism ---" << endl;
    s1->area();
    s2->area();

    return 0;
}