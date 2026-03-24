#include<iostream>
using namespace std;

int main(){
    int year;

    cout<<"enter the number is leap year or not";
    cin>>year;

    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)){
    cout << year << " is a leap year " <<endl;
    }
    else{
        cout << year << " Is not a leap year " <<endl;
    }

    return 0;
}
