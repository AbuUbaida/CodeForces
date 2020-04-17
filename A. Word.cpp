#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s;
    cin>>s;
    s.shrink_to_fit();

    int upper=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            upper++;
    }
    if(upper>s.length()/2)
    {
        transform(s.begin(),s.end(),s.begin(),::toupper);
        cout<<s<<endl;
    }
    else
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s<<endl;
    }
}
