#include<iostream>
using namespace std;

class electricitybill {
    float unit;
    float rate;
    float billamount;

    public :
    electricitybill(float r){

    rate = r;
    unit = 0;
    billamount = 0;
    }    


    void inputunits(){
        cout<<"Enter the units ";
        cin>>unit;
    }

void calculatebill(){
    billamount = unit * rate;
}

void applydiscount(){
    billamount = billamount -(billamount * 0.02);
}

void displaybill(){
    cout<<"The final electricity bill is "<<billamount <<endl;
}

};

int main(){
    electricitybill assume(5.0);
    assume.inputunits();
    assume.calculatebill();
    assume.applydiscount();
    assume.displaybill();

    return 0;
}