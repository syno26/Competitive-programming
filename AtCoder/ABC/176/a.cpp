#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;

int main(void)
{
    ll n,x,t;
    cin >> n >> x >> t;
    ll a=n/x;
    if(n%x!=0)
    {
        a++;
    }
    cout << a*t << endl;
    return 0;
}
