#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    s1.shrink_to_fit();
    s2.shrink_to_fit();

    for(int i=0;i<s1.size();i++)
    {
        if(fabs(s1[i]-s2[i])==32 || s1[i]-s2[i]==0)
        {
            continue;
        }
        else
        {
            if(toupper(s1[i])>toupper(s2[i]))
            {
                cout<<1<<endl;
                return 0;
            }
            else
            {
                cout<<-1<<endl;
                return 0;
            }
        }
    }
    cout<<0<<endl;
}
