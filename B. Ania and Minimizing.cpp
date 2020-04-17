#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int c=0;

    if(n==1 && k==1)
    {
        cout<<"0"<<endl;
        return 0;
    }

    for(int i=0;i<n && c<k;i++)
    {
        if(i!=0 && s[i]!='0')
        {
            c++;
            s[i]='0';
        }
        else if(i==0 && s[i]!='1')
        {
            c++;
            s[i]='1';
        }
    }
    cout<<s<<endl;
}
