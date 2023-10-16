#include <iostream>
#include <vector>
#include <string>

using namespace std;
bool isVikaLiked(const vector<string>& carpet)
{
    int n = carpet.size();
    int m = carpet[0].size();

    for (int col1 = 0; col1 < m; ++col1)
    {
        for (int col2 = col1 + 1; col2 < m; ++col2)
        {
            for (int col3 = col2 + 1; col3 < m; ++col3)
            {
                for (int col4 = col3 + 1; col4 < m; ++col4)
                {
                    bool v_found = false, i_found = false, k_found = false, a_found = false;
                    for (int row = 0; row < n; ++row)
                    {
                        if (carpet[row][col1] == 'v') v_found = true;
                        if (carpet[row][col2] == 'i') i_found = true;
                        if (carpet[row][col3] == 'k') k_found = true;
                        if (carpet[row][col4] == 'a') a_found = true;
                    }
                    if (v_found && i_found && k_found && a_found)
                    {
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<string> carpet(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> carpet[i];
        }

        bool liked = isVikaLiked(carpet);
        cout << (liked ? "YES" : "NO") << endl;
    }

    return 0;
}
