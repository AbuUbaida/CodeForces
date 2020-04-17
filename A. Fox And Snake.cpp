#include<iostream>
#include<string>

using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    char s[r+1][c+1];

    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            s[i][j]='.';
        }
    }

    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            if(i%2!=0)
            {
                s[i][j]='#';
            }
            else if(s[i-2][1]=='.')
            {
                s[i][1]='#';
            }
            else
            {
                s[i][c]='#';
            }
        }
    }

    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            cout<<s[i][j];
        }
        cout<<endl;
    }


}
