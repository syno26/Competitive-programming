#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;

int main(void)
{
    ll n,sum=0,a,b;
    cin >> n;
    for(int i=0;i<n;++i)
    {
        cin >> a >> b;
        sum+=(b*(b+1))/2-(a*(a-1))/2;
    }
    cout << sum << endl;

    return 0;
}
