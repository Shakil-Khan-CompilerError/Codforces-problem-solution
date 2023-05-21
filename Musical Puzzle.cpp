#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    set<string> st;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        for (int i = 0; i < n - 1; i++)
        {
            string a = {s[i], s[i + 1]};
            st.insert(a);
        }
        cout << st.size() << "\n";
        st.erase(st.begin(), st.end());
    }
    return 0;
}
