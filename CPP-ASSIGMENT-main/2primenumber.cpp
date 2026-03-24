#include<iostream>
using namespace std;

int main(){

    int num,i,flag=0;
    cout<<"Enter the number : ";
    cin>>num;

    if(num <=1){
        cout<<" is not an prime number ";
    }
    else {
        for(i=2; i<=num / 2; i++){
             if(num % i == 0){
                flag = 1;
                break;
             }
        }
    }
    if(flag == 0)
    cout<< num << " is a prime number " <<endl;
    else 
    cout << num << " is not the prime number " <<endl;

}