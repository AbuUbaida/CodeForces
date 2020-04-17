#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    s.shrink_to_fit();

    set<char> q;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            q.insert(s[i]);
        }
    }
    cout<<q.size()<<endl;
}
