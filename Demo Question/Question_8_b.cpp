#include<iostream>
using namespace std;
template <typename T>
T Average(T a, T b)
{
    return (a+b)/2;
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
        if(a<0 || b<0)
        {
            throw "Value Shouldn't be  negative";
        }
        cout<<"Average Value of A and B is:"<<Average<int>(a,b)<<endl;
    }
    catch(const char*Msg)
    {
        cout<<"Exception caught:"<<Msg<<endl;
    }
    return 0;
}