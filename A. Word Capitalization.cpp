#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main()
{
    string s;
    cin>>s;
    s.replace(s.begin(),s.begin()+1,1,toupper(s[0]));
    cout<<s<<endl;
}
