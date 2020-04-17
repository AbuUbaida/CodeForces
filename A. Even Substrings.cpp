#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    int sum=0;
    for(int i=0;i<n;i++)
    {
        int k=s[i]-'0';
        if(k%2==0)
        {
            sum+=i+1;
        }
    }
    cout<<sum<<endl;
}
