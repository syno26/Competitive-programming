#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;

int main(void)
{
    int n;
    int ans = 0, cA = 0, cT = 0, cC = 0, cG = 0;
    string s;
    cin >> n >> s;

    for (int i = 0; i < n; i++)
    {
        cA = 0, cT = 0, cC = 0, cG = 0;
        for (int j = i; j < n; j++)
        {
            if (s[j] == 'A')
                cA++;
            else if (s[j] == 'T')
                cT++;
            else if (s[j] == 'C')
                cC++;
            else
                cG++;
            if (cA == cT && cC == cG)
            {
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
