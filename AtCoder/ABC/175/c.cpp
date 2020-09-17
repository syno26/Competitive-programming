#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;

int main(void)
{
    ll x,k,d;
    ll kaisu;
    cin >> x >> k >> d;
    if(abs(x)>=abs(k*d))
    {
        cout << abs(x)-abs(k*d) << endl;
    }
    else
    {
        kaisu=abs(x)/d;
        if((k-kaisu)%2==0)
        {
            cout << abs(abs(x)-abs(d*kaisu)) << endl;
        }
        else
        {
            cout << abs(abs(x)-abs(d*(kaisu+1))) << endl;
        }
    }

    return 0;
}
