#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;

int main(void)
{
    ll n;
    vector<ll> ans;
    set<ll> p;
    cin >>n;

    int min=0;
    
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        p.insert(x);
        min=0;
        auto itr=p.begin();
        while(itr!=p.end())
        {
            if(min<*itr)
            {
                ans.push_back(min);
                break;
            }
            ++itr;
            ++min;
        }
        if(itr==p.end())
        {
            ans.push_back(min);
        }
    }

    for(int i=0;i<n;i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}
