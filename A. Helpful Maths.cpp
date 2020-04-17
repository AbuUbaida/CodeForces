#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    string s1,s2;
    cin>>s1;
    s1.shrink_to_fit();
    char numb;
    for(int i=0;i<s1.size();i++)
    {
        numb=s1[i];
        if(numb=='1'||numb=='2'||numb=='3')
        {
            s2+=numb;
        }
    }
    s2.shrink_to_fit();
    sort(s2.begin(),s2.end());
    int i=0;
    while(i<s2.size())
    {
        cout<<s2[i];
        if(i!=s2.size()-1)
            cout<<"+";
        i++;
    }
    cout<<endl;
}
