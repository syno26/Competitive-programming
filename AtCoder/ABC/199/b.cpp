#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;

int main(void)
{
    ll a,b,c;
    cin >> a >> b >> c;

    a*=a;
    b*=b;
    c*=c;

    if(a+b<c) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
