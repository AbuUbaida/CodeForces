#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    if(n<26)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        s.shrink_to_fit();
        transform(s.begin(),s.end(),s.begin(),::toupper);
        sort(s.begin(),s.end());
        if(s[0]!=65)
        {
            cout<<"NO"<<endl;
            return 0;
        }

        int comp=65;
        for(int i=1; i<n; i++)
        {
            if(s[i]!=comp && s[i-1]!=comp)
            {
                cout<<"NO"<<endl;
                return 0;
            }
            else if(s[i]!=s[i-1])
                comp++;
        }
        cout<<"YES"<<endl;
    }
}
