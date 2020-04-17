#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int n;
        cin>>n;
        int s,sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>s;
            sum+=s;
        }
        cout<<(sum+n-1)/n<<endl;
        t--;
    }
}
