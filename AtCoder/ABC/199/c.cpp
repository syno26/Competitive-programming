#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;

int main(void)
{
    ll n,q,c=0,last_t=1;
    string s;

    cin >> n;
    cin >> s;
    cin >> q;

    for(int i=0;i<q;++i){
        int t,a,b;
        cin >> t >> a >> b;
        if(t==1){
            if(last_t==2 && c%2!=0){
                string tmp;
                tmp = s.substr(0,n);
                s.erase(0,n);
                s = s + tmp;
            }
            c=0;

            last_t=1;
            char tmp;
            tmp = s[a-1];
            s[a-1] = s[b-1];
            s[b-1] = tmp;
        }
        else if(t==2){
            last_t=2;
            c++;
        }
    }

    if(last_t==2 && c%2!=0){
        string tmp;
        tmp = s.substr(0,n);
        s.erase(0,n);
        s = s + tmp;
    }

    cout << s << endl;

    return 0;
}
