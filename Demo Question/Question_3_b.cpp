#include<iostream>
using namespace std;
template <typename T>
T Sum(T a,T b)
{
    return a+b;
}

int main()
{
    int a,b,x;
    cout<<"Enter the Number A:";
    cin>>a;
    cout<<"Enter the Number B:";
    cin>>b;
    x=Sum<int>(a,b); //they said  if sum exceeds 100. 
    //therefore we took x variable
    try
    {
        if(x>100)
        {
            throw "The Sum Exceeds 100";
        }
        cout<<"Sum of A and B is:"<<Sum<int>(a,b)<<endl;
    }
    catch(const char*Msg)
    {
        cout<<"Exception Caught:"<<Msg<<endl;
    }
    
}
