#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int s,Count=0;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(s%2==0)
            Count++;
    }
    cout<<Count<<endl;
}
