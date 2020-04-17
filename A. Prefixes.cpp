#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ab=0;
    for(int i=0;i<s.length();i+=2)
    {
        if((s[i]=='a' && s[i+1]!='b')||(s[i]=='b' && s[i+1]!='a'))
        {
            ab++;
            s[i]='a';
            s[i+1]='b';
        }
    }
    cout<<ab<<endl<<s<<endl;

}
