#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;
 
int main(void)
{
    ll n,k;
    cin >> n >> k;
    vector<ll> a(n);
    vector<bool> judge(n,false);
    deque<ll> path;
    for(ll i=1;i<=n;++i)
    {
        cin >> a[i];
    }
    ll x=1,kd=k,y=0,node;
    while(k>0 && judge[x]==false)
    {
        judge[x]=true;
        path.push_back(x);
        x=a[x];
        --k;
        //cout << x << endl;
    }
    if(k!=0 && judge[x]==true)
    {
        node = x;
        x=1;
        while(x!=node)
        {
            path.pop_front();
            x=a[x];
            y++;
        }
        x=path[((kd-y)%(path.size()))];
        //cout << "kd:" << kd << " y:" << y << " path.size:" << path.size() << endl;
        //cout << path[0] << endl;
    }
 
    cout << x << endl;
    return 0;
}
