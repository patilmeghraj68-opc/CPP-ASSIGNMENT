#include<iostream>
using namespace std;
template <typename T>
T Substraction(T a,T b)
{
    return a-b;
}

int main()
{
    int a,b,x;
    cout<<"Enter the Number A:";
    cin>>a;
    cout<<"Enter the Number B:";
    cin>>b;
    x=Substraction<int>(a,b); //they said if result is negative. 
    //therefore we took x variable
    try
    {
        if(x<0)
        {
            throw "The Result is Negative";
        }
        cout<<"Substraction of A and B is:"<<Substraction<int>(a,b)<<endl;
    }
    catch(const char*Msg)
    {
        cout<<"Exception Caught:"<<Msg<<endl;
    }
    
}
