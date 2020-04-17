#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    int bln,frnd;
    cin>>bln>>frnd;

    string s;
    cin>>s;
    s.shrink_to_fit();
    sort(s.begin(),s.end());

    int counter;
    char ch;
    for(int i=0;i<s.size();)
    {
        ch=s[i];
        counter=0;
        while(ch==s[i])
        {
            counter++;
            i++;
        }
        if(counter>frnd)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}
