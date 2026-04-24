#include<iostream>
using namespace std;
template <typename T>
T Cube(T num)
{
    return num*num*num
}
int main()
{
    int num;
    cout<<"Enter the value:"<<endl;
    cin>>num;
    try
    {
        if(num==0)
        {
            throw "Number shouldn't be";
        }
        cout<<"Cube Value of A :"<<Cube<int>(num)<<endl;
    }
    catch(const char*Msg)
    {
        cout<<"Exception caught:"<<Msg<<endl;
    }
    return 0;
}