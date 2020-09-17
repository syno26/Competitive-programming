#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;

int main(void)
{
    ll n,a0=0,a1,sum=0;
    cin >> n;
    for(ll i=0;i<n;i++)
    {
        cin >> a1;
        if(a0>a1)
        {
            sum+=a0-a1;
//            a0=a1;
        }
        else
        {
            a0=a1;
        }
    }
    cout << sum << endl;
    return 0;
}
