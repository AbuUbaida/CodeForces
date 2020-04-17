#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    int counter=0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]!=s[i+1])
        {
            if(s[i+1]=='F')
                counter++;
            else
                counter--;
        }
    }
    if(counter>0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
