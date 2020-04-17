#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;

    int power[n];
    for(int i=0;i<n;i++)
    {
        cin>>power[i];
    }

    int scl[n];
    vector<int> vec[m];
    int temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        scl[i]=temp-1;
        vec[scl[i]].push_back(power[i]);
    }

    int id,idScl,idPow;
    int highest,Count=0;
    for(int i=0;i<k;i++)
    {
        cin>>id;
        idScl=scl[id-1];
        idPow=power[id-1];

        highest=*max_element(vec[idScl].begin(),vec[idScl].end());
        if(idPow<highest)
            Count++;
    }
    cout<<Count<<endl;
}
