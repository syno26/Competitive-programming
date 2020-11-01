#include <bits/stdc++.h>
using namespace std;

using ll = unsigned long long;
using ld = long double;
using Graph = vector<vector<int>>;

int main(void)
{
    ll a,b,c,sum=0,seki;
    ll x=998244353;
    cin >> a >> b >> c;
    // a%=x;
    // b%=x;
    // c%=x;

    a=a*(a+1)/2;
    b=b*(b+1)/2;
    c=c*(c+1)/2;

    a%=x;
    b%=x;
    c%=x;

    sum=a*b;
    sum%=x;
    sum*=c;
    sum%=x;

    cout << sum << endl;
    return 0;
}
