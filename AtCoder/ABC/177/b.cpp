#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;

int main(void)
{
    string s,t;
    ll fuitti=0,saisyo=LONG_LONG_MAX;
    cin >> s;
    cin >> t;
    for(int i=0;i<=s.size()-t.size();i++)
    {
        fuitti=0;
        for(int j=0;j<t.size();j++)
        {
            if(s[i+j]!=t[j])
            {
                fuitti++;
            }
        }
        saisyo=min(saisyo,fuitti);
    }
    cout << saisyo << endl;
    return 0;
}
