#include<iostream>

using namespace std;

int main()
{
    int n,p;
    cin>>n>>p;
    int tr,tg,tb;
    tr=n*2;
    tg=n*5;
    tb=n*8;
    int sum=0;

    int i=1;
    while(p*i<tr)
    {
        i++;
    }
    sum+=i;
    i=1;
    while(p*i<tg)
    {
        i++;
    }
    sum+=i;
    i=1;
    while(p*i<tb)
    {
        i++;
    }
    sum+=i;
    cout<<sum<<endl;




    /*for(int i=1;; i++)
    {
        if(k*i<r||k*i<g||k*i<b)
        {

            if(k*i<r)
                sum++;
            if(k*i<g)
                sum++;
            if(k*i<b)
                sum++;
        }
        else
            break;
    }
    cout<<sum<<endl;
    */
}
