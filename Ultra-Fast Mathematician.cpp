#include <iostream>
using namespace std;

int main()
{
    string s,s1;
    cin>>s>>s1;
    for(int i=0; i<s.length(); i++)
    {
        cout<<(s[i]^s1[i]);
    }
}
