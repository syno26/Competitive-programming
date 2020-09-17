#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;

int main(void)
{
    ll a,b,c,d;
    ll saidai=-9223372036854775808;
    cin >> a >> b >> c >> d;

    if((a<0 && b>0) || (c<0 && d>0))
    {
        saidai=0;
    }
    saidai=max(saidai,b*d);
    saidai=max(saidai,a*c);
    saidai=max(saidai,a*d);
    saidai=max(saidai,c*b);
    cout << saidai << endl;     
    return 0;
}
