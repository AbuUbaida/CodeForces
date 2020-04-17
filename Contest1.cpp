#include<iostream>
#include<string>

using namespace std;

int main()

{
    int n,q,t,l,r,p;
    cin>>n>>q;
    string s;
    cin>>s;
    s.shrink_to_fit();
    while(q!=0)
    {
        cin>>t;
        if(t==2)
        {
            cin>>l>>r;
            string ss=s.substr(l-1,r);
            ss.shrink_to_fit();
            if(ss.length()%2!=0)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                int temp=ss.length()/2;
                if(ss.substr(0,temp).compare(ss.substr(temp,temp))==0)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
        }
        else
        {
            char c;
            cin>>p>>c;
            s.replace(p-1,1,1,c);
        }

        q--;
    }

}
