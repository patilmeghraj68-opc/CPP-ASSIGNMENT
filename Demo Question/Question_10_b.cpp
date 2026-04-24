#include<iostream>
#include<cmath>
using namespace std;
template <typename T>
T Power(T a, T b)
{
    return pow(a,b);
}
int main()
{
    int a,b;
    cout<<"Enter the value of A:"<<endl;
    cin>>a;
    cout<<"Enter the value of B:"<<endl;
    cin>>b;
    try
    {
        if(b==0)
        {
            throw "The value of b shouldn't be zero";
        }
    }
    catch(const char*Msg)
    {
        cout<<"Exception caught:"<<Msg<<endl;
    }
    return 0;
}