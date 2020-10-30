#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;

int main(void)
{
    ll n,tmp;
    cin >> n;
    vector<ll> v;

    for(long i=1;i<=sqrt(n);++i)
    {
        if(n%i==0)
        {
            cout << i << endl;
            if(i!=n/i)
            {
                v.push_back(n/i);
            }
        }
    }
    if(v.size()==0)
    {
        return 0;
    }
    for(long i=0;i<=v.size();++i)
    {
        tmp=v[v.size()-i];
        if(tmp!=0)
        {
            cout << v[v.size()-i] << endl;
        }
    }

    return 0;
}
