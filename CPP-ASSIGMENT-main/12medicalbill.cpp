#include<iostream>
using namespace std;

class medicalbill {
    string patientname ;
    int daysadmitted;
    float dailycharge;
    float totalbill;

    public :

    medicalbill(string name, int days,float charge){
        patientname=name;
        daysadmitted=days;
        dailycharge=charge;
        totalbill=daysadmitted*dailycharge;
    }

    void displaybill(){
        cout<<"Medical bill"<<endl;
        cout<<"Patient name "<<patientname <<endl;
        cout<<" Days admitted "<<daysadmitted <<endl;
        cout<<"Daily charge :" <<dailycharge <<endl;
        cout<<"Total bill : " <<totalbill <<endl;
    }
};

int main(){
    string name;
    int days;
    float charge;

    cout<<"Enter the patient name ";
    getline(cin,name);

    cout << "Enter number of days admitted: ";
    cin >> days;

    cout << "Enter daily charge (Rs.): ";
    cin >> charge;

   
    medicalbill mb(name, days, charge);

    // Display the bill
    mb.displaybill();

    return 0;
}
