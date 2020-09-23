#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;

int main(void)
{
    string s;
    cin >> s;
    
    if(s[s.size()-1]=='s')
    {
        cout << s ;
        cout << "es" << endl;
    }
    else
    {
        cout << s ;
        cout << "s" << endl;
    }
    return 0;
}
