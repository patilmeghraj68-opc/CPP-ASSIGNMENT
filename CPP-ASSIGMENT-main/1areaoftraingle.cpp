#include<iostream>
using namespace std;

double area(double base, double height){
return 0.5 * base *height;
}

double area(double radius){
    return radius * radius;
}

int main(){
    double base,height , radius;

    cout<<"Enter the value for base and height \n ";
    cin>>base>>height;

    cout<<"Enter the value for radius ";
    cin>>radius;

    cout<<"THe area of traingle is "<<area(base,height) <<endl;
    cout<<"The area of circle is " <<area(radius) <<endl;

}