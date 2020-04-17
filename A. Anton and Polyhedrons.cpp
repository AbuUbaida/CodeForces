#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string name[n];
    int counter=0;
    for(int i=0; i<n; i++)
    {
        cin>>name[i];
        name[i].shrink_to_fit();
        if(name[i]=="Tetrahedron")
            counter+=4;
        else if(name[i]=="Cube")
            counter+=6;
        else if(name[i]=="Octahedron")
            counter+=8;
        else if(name[i]=="Dodecahedron")
            counter+=12;
        else if(name[i]=="Icosahedron")
            counter+=20;
    }
    cout<<counter<<endl;
}
