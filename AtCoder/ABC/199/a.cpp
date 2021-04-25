#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;

int main(void)
{
    int n;
    vector<int> A,B;

    cin >> n;

    int min=1001,max=0;
    for(int i=0;i<n;++i){
        int tmp;
        cin >> tmp;
        if(max<tmp){
            max=tmp;
        }
    }

    for(int i=0;i<n;++i){
        int tmp;
        cin >> tmp;
        if(min>tmp){
            min=tmp;
        }
    }

    if(min - max < 0) cout << "0" << endl;
    else cout << min - max +1 << endl;

    return 0;
}
