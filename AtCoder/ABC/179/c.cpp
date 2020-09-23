#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;

int main(void)
{
    ll n,count=0;
    cin >> n;
    for(int i=1;i<n;i++)
    {
        count += (n/i);
        if((n%i) == 0)
        {
            count-=1;
        }
        //cout << count << endl;
    }
    cout << count << endl;
    return 0;
}
