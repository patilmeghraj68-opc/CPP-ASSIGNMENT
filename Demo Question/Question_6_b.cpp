#include<iostream>
using namespace std;
template <typename T>
T Min(T a, T b)
{
    if(a<b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int a,b;
    cout<<"Enter the number A:";
    cin>>a;
    cout<<"Enter the Number B:";
    cin>>b;
    try
    {
        if(a<0 && b<0)
        {
            throw "Both Values are negative";
        }
        cout<<"Min Value of A and B is:"<<Min<int>(a,b)<<endl;
    }
    catch(const char*Msg)
    {
        cout<<"Exception Caught:"<<Msg;
    }
    return 0;
    
}