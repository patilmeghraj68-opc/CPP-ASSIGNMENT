#include<iostream>
using namespace std;

class leapyear{
    public :
    int year;

    void call(){
        cout<<"Enter the number of year ";
        cin>>year;    }

void checkleapyear(){
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)){
    cout<<"It is an leap year ";
    }
    else{
cout<<"It is not an leap year ";
    }
}
};


int main(){
    leapyear pr;

    pr.call();
    pr.checkleapyear();

    return 0;
}
