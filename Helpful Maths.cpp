#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());

    vector<char> a;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '+')
        {
            a.push_back(s[i]);

            if (i == n - 1)
                break;
            a.push_back('+');
        }
    }

    for (int i = 0; i < a.size(); i++)
        cout << a[i];

    return 0;
}
