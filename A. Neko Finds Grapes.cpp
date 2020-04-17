#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int c,k;
    cin>>c>>k;
    int cara[c],kara[k];
    int ce=0,co=0,ke=0,ko=0;

    for(int i=0;i<c;i++)
    {
        cin>>cara[i];
        if(cara[i]%2==0)
            ce++;
        else
            co++;
    }
    for(int i=0;i<k;i++)
    {
        cin>>kara[i];
        if(kara[i]%2==0)
            ke++;
        else
            ko++;
    }

    cout<<(min(ce,ko)+min(co,ke))<<endl;
}
