#include<iostream>

using namespace std;

int main()
{
    int n;
    string s;
    cin>>n>>s;
    s.shrink_to_fit();
    int total=0;

    for(int i=0; i<n-2;)
    {
        if(s[i]=='x')
        {
            int c=0;
            while(s[i]=='x')
            {
                i++;
                c++;
            }
            if(c>=3)
            {
                total+=c-2;
            }
        }
        else
        {
            i++;
        }
    }
    cout<<total<<endl;
}
