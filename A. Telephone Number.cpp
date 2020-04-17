#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t!=0)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n<11)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int i=0;
            while(s[i]!='8' && i!=n)
                i++;
            if(i<=n-11)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        t--;
    }
}
