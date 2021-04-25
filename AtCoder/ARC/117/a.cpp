#include <bits/stdc++.h>
using namespace std;

using ll = unsigned long long;
using ld = long double;
using Graph = vector<vector<int>>;

int main(void)
{
    long a,b,e_max,e_min,sum;
    e_max=1000000000;
    e_min=-1000000000;
    cin >> a >> b;

    sum=0;
    int i;
    for(i=1;i<a;i++){
        cout << i << " ";
        sum+=i;
    }
    cout << e_max - sum << " ";

    sum=0;
    int j;
    for(j=-1;j>(-1)*b;j--){
        cout << j << " ";
        sum+=j;
    }
    cout << e_min - sum;

    return 0;
}
