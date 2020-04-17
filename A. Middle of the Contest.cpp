#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;

    int h1,m1,h2,m2;
    h1=stoi(s1.substr(0,2));
    m1=stoi(s1.substr(3,2));
    h2=stoi(s2.substr(0,2));
    m2=stoi(s2.substr(3,2));

    int tm1,tm2;
    tm1=(h1*60)+m1;
    tm2=(h2*60)+m2;

    int am=(tm1+tm2)/2;
    int fh=am/60;
    int fm=am-(fh*60);

    if(fh<10)
        cout<<"0"<<fh;
    else
        cout<<fh;
    cout<<":";
    if(fm<10)
        cout<<"0"<<fm;
    else
        cout<<fm;

    cout<<endl;

}
