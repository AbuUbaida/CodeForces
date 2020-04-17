#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s;
    cin>>s;
    s.shrink_to_fit();
    sort(s.begin(),s.end());
    int t=1;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]!=s[i-1])
        {
            t++;
        }
    }
    if(t%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
        return 0;
    }
    else
        cout<<"IGNORE HIM!"<<endl;
}
