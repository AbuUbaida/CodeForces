#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin>>s;
    s.shrink_to_fit();

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}