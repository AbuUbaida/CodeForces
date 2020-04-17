#include<iostream>
#include<string>

using namespace std;

int main()
{
    int a[5];
    for(int i=1;i<=4;i++)
    {
        cin>>a[i];
    }

    string s;
    cin>>s;
    s.shrink_to_fit();

    int sum=0;
    for(int i=0;i<s.size();i++)
    {
        int cal=s[i]-48;                    //cal=s[i]-'0'
        sum+=a[cal];
    }
    cout<<sum<<endl;
}
