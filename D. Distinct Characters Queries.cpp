#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    string q,x,y;
    while(n!=0)
    {
        cin>>q>>x>>y;
        if(q=="1")
        {
            int pos=0;
            stringstream geek(x);
            geek>>pos;
            s[pos-1]=y[0];

            //cout<<s<<endl;
        }
        else
        {
            int l=0,r=0;
            stringstream geek(x);
            geek>>l;
            stringstream geek1(y);
            geek1>>r;
            string s2;
            for(int k=l-1;k<=r-1;k++)
            {
                s2+=s[k];
            }
            sort(s2.begin(),s2.end());
            int c=0;
            for(int k=0;k<s2.length()-1;k++)
            {
                if(s2[k]!=s2[k+1])
                    c++;
            }
            cout<<c+1<<endl;
        }

        n--;
    }
}
