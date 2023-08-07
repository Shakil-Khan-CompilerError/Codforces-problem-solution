#include<iostream>
using namespace std;

int main()
{

    int m;
    cin>>m;
    while(m--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<(b>a)+(c>a)+(d>a)<<endl;
    }
}
