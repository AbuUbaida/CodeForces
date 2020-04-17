#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin>>s;
    s.shrink_to_fit();

    if(s[s.size()-1]!='a'&& s[s.size()-1]!='e'&& s[s.size()-1]!='i'&& s[s.size()-1]!='o'&& s[s.size()-1]!='u'&& s[s.size()-1]!='n')
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else if(s.size()==1)
    {
        cout<<"YES"<<endl;
        return 0;
    }

    if(s.size()>=2)
    {
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='n')
            {
                if(s[i+1]!='a'&& s[i+1]!='e'&& s[i+1]!='i'&& s[i+1]!='o'&& s[i+1]!='u')
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
        cout<<"YES"<<endl;

    }
}
