#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;

int main(void)
{
    ll n,Wc=0,Rc=0,sikiri;
    cin >> n;
    ll mini=n;
    char c[n];
    for(int i=0;i<n;i++)
    {
        cin >> c[i];
        if(c[i]=='R')
        {
            Rc++;
        }
    }
    for(int i=0;i<=n;i++)
    {
//        mini=min(mini,Rc+Wc);
        if(Wc<=Rc)
        {
            mini=min(mini,Rc);
        }
        else if(Wc>Rc)
        {
            mini=min(mini,Wc);
        }            
        if(c[i]=='W')
        {
            Wc++;
        }
        else if(c[i]=='R')
        {
            Rc--;
        }
    }
    cout << mini << endl;
    return 0;
}
