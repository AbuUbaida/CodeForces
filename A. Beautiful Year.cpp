#include<iostream>
#include<string>

using namespace std;

int main()
{
    int y;
    string s;
    cin>>y;

    while(true)
    {
        int flag=0;
        y++;
        s=to_string(y);
        s.shrink_to_fit();
        for(int i=s.length()-1; i>0; i--)
        {
            for(int j=0; j<i; j++)
            {
                if(s[i]==s[j])
                {
                    flag++;
                }
            }
        }
        if(flag==0)
        {
            cout<<y<<endl;
            return 0;
        }

    }
}
