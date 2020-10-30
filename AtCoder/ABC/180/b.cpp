#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;

int main(void)
{
    ll n,a=0,c=0,x;
    ld b=0.0;
    cin >> n;

    for(int i=0;i<n;++i)
    {
        cin >> x;
        a += abs(x);
        b+=pow(x,2);
        c=max(c,abs(x));
    }
    b=sqrt(b);

    cout << a << endl;
    cout << fixed << setprecision(12) << b << endl;
    cout << c << endl;

    return 0;
}
