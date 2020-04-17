#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
    int n;
    cin>>n;
    map<string,int> m;
    map<string,int>::iterator it;
    string name;
    int score;

    while(n!=0)
    {
        n--;
        cin>>name>>score;
        m[name]=score;
    }
}
