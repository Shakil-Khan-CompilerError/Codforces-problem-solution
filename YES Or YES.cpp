#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;

    char str[5];
    cin>>T;

    while(T)
    {
        T--;

        cin>>str;

        if(!strcasecmp(str, "yes"))
            cout<<"YES\n";

        else  cout<<"NO\n";
    }
}

