#include<bits/stdc++.h>

using namespace std;

int main()
{
    cout<<INT_MAX<<endl;
    cout<<INT_MAX+1<<endl;
    cout<<INT_MIN<<endl;
    cout<<INT_MIN-1;
    int c;
    long long int n;
    cin>>c;
    for(int i=0; i<c; i++)
    {
        cin>>n;

        long long int d=n%14;
        long long int p=n/14;
        if(d>=1 && d<=6 && p!=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
