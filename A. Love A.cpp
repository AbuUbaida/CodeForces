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
        if(s[i]=='a')
        {
            counter++;
        }
    }

    if(counter>s.length()/2)
        cout<<s.length()<<endl;
    else
    {
        int rest=s.length()-counter;
        int dif=rest-counter;
        cout<<s.length()-dif-1<<endl;
    }
}
