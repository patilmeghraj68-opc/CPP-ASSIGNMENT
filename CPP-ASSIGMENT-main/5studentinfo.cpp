#include<iostream>
using namespace std;

class student{
    public :
    string name;
    int roll;
    int division;
    string department;

void getinfo(){
    cout<<" Enter the name of the student : ";
    cin>>name;
    cout<<"Enter the roll no of student : ";
    cin>>roll;
    cout<<"Enter the division ";
    cin>>division;
    cout<<" Enter the department : ";
    cin>>department;
}

void showinfo(){
    cout<<" The name of student is " <<name <<endl;
    cout<<" THe roll of student is "<<roll<<endl;
    cout<<"The divion of student is "<<division <<endl;
    cout<<" The department is "<<department <<endl;
}
};

int main(){
    student s[4];
    for(int i=1; i<3; i++){

        cout<<"Get student information is "<< i+1<< endl;
        s[i].getinfo();
    }

    for(int i=1; i<3; i++){
        cout<<" show information of student  "<< i+1 <<endl;
        s[i].showinfo();
    }

    return 0;

}