#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n;
    string s;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            s+="I hate";
        }
        else
        {
            s+="I love";
        }
        if(i==n)
            s+=" it";
        else
            s+=" that ";
    }
    cout<<s<<endl;
}
