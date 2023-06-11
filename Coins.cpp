#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=0;
    cin >> t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;
        if((n%2 == 0) || (n%2 == 1 && k%2 == 1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
