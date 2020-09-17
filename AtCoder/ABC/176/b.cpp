#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;

int main(void)
{
    unsigned long long sum=0;
    string n;
    cin >> n;
    ll i=0;
    while(n.size()>i)
    {
        char kazu=n[i];
        sum+=int(kazu)-48;
        i++;
    }
    //cout << sum << endl;
    bool judge=false;
    if(sum%9==0)
    {
        judge=true;
    }
    if(judge)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
