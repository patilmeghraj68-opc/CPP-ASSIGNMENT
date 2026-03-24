#include<iostream>
using namespace std;

class Swap {
    public :
    int a,b;


    void getinfo(){
        cout<<"Enter the number a and b ";
        cin>>a>>b;
    }

    void swapnumber(){
        int temp=a;
        a=b;
        b=temp;
    }

    void showinfo(){
        cout<<"a = "<<a <<endl <<"b = "<<b <<endl;
    }

};

int main(){
Swap prasad;
prasad.getinfo();
prasad.swapnumber();
prasad.showinfo();

}



