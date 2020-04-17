#include<iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    int r;
    if(a>b)
    {
        r=a-b;
        cout<<b<<" "<<r/2<<endl;
    }
    else
    {
        r=b-a;
        cout<<a<<" "<<r/2<<endl;
    }
}
