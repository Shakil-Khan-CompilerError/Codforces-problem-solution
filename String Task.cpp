#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<char> a;
    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A' || s[i] == 'a' || s[i] == 'O' || s[i] == 'o' || s[i] == 'Y' || s[i] == 'y'
        || s[i] == 'E' || s[i] == 'e' || s[i] == 'U' || s[i] == 'u' || s[i] == 'I' || s[i] == 'i')
            continue;

        a.push_back('.');
        if (s[i] < 97)
            s[i] += 32;
        a.push_back(s[i]);
    }

    for (int i = 0; i < a.size(); i++)
        cout << a[i];
    return 0;
}
