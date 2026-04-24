#include<iostream>
using namespace std;
template <typename T>
T Max(T a,T b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    };
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
        if(a==b)
        throw "Both Values of A and B are equal";
        
        cout<<"Max Value of A and B is:"<<Max<int>(a,b)<<endl;
    }
    catch(const char*Msg)
    {
        cout<<"Exception Caught:"<<Msg<<endl;
    }
    
}
