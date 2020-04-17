#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;

    cin>>s;
    s.shrink_to_fit();
    int counter=0;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='7'||s[i]=='4')
        {
            counter++;
        }
        if(counter>7)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if(counter==4||counter==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
