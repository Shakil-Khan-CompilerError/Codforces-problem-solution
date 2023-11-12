#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    set<char>s;
    while(cin>>ch)
    {
        if(isalpha(ch))
        {
            s.insert(ch);
        }

    }
    cout<<s.size();
}
