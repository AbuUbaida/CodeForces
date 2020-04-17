#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s[n];
    int flag=0;

    for(int i=0; i<n; i++)
    {
        cin>>s[i];
        s[i].shrink_to_fit();
        if(s[i][0]=='O' && s[i][0]==s[i][1] && flag==0)
        {
            s[i].replace(0,2,"++");
            flag++;
        }
        else if(s[i][3]=='O' && s[i][3]==s[i][4] && flag==0)
        {
            s[i].replace(3,2,"++");
            flag++;
        }
    }

    if(flag==1)
    {
        cout<<"YES"<<endl;
        for(int i=0; i<n; i++)
            cout<<s[i]<<endl;
    }
    else
        cout<<"NO";
}
