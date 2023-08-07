#include<bits/stdc++.h>
using namespace std;

int main()
{
    set <int> s;
    for(int i=1; i<=4; i++)
    {
        int m;
        cin>>m;
        s.insert(m);
    }
    cout<<4-s.size();
}
