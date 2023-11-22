#include <bits/stdc++.h>
using namespace std;

int solve()
{

    int a,b;
    cin>>a>>b;

    a = abs(a);
    b = abs(b);

    if(abs(a-b) <= 1) return a + b;

    else return a + b + abs(a-b)-1;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        cout<<solve()<<endl;
    }
}
