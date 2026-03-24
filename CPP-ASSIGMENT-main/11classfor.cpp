#include<iostream>
using namespace std;

class printnum{
    public :

int n,i;

void getnum(){
    cout<<"Enter the num you want ";
    cin>>n;
}

void shownum(){
    for(i=0; i<=n; i++){
        cout<<i <<" ";
    }
    cout << endl;
}

};

int main(){
    printnum core ;
    core.getnum();
    core.shownum();

    return 0;
}

