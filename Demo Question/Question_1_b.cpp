#include<iostream>
using namespace std;
//Using template
template <typename T>
T Multiplication(T a,T b)
{
    return a*b;
}
int main()
{
    int a,b;
    cout<<"Enter the Value of A:";
    cin>>a;
    cout<<"Enter the value of B:";
    cin>>b;
    try //jaha pei exception aa sakta hei
    {
        if(a<0 || b<0)
        {
            throw"Please enter a positive number "; //if expection appear then throw
        }
        cout<<"Multiplication of a and b is:"<<Multiplication<int>(a,b)<<endl; //if exception dont appear

    }
    catch(const char*Msg) //char * so that message is in string format 
    {
        cout<<"Exception Caught:"<<Msg<<endl;
        // This message will be displayed when we enter a negative number
    } //aur catch is for message kya dena hei
    
}