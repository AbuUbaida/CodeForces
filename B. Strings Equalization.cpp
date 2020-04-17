#include<bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q!=0)
    {
        string s,t;
        cin>>s>>t;

        int flag=0;
        for(int i=0;i<s.length();i++)
        {
            for(int j=0;j<t.length();j++)
            {
                if(t[j]==s[i])
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
        q--;
    }
}
