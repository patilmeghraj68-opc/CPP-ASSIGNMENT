#include<iostream>
using namespace std;
template <typename T>
T Modulus(T a,T b)
{
    return a % b;
}

int main()
{
    int a,b;
    cout<<"Enter the Number A:";
    cin>>a;
    cout<<"Enter the Number B:";
    cin>>b;
    try
    {
        if(b==0)
        {
            throw "The value of B should be more than Zero";
        }
        cout<<"Modulus of A and B is:"<<Modulus<int>(a,b)<<endl;
    }
    catch(const char*Msg)
    {
        cout<<"Exception Caught:"<<Msg<<endl;
    }
    
}
