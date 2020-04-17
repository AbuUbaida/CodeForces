#include<bits/stdc++.h>

using namespace std;

int main()
{
    long int n1,n2;
    int t;
    cin>>t;
    while(t!=0)
    {
        cin>>n1>>n2;
        if(n1==n2)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
        t--;
    }
}
