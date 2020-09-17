#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N,K;
    cin >> N >> K;
    int p[N],price=0;

    for(int i=0;i<N;i++)
    {
        cin >> p[i];
    }
    sort(p,p+N);
    for(int i=0;i<K;i++)
    {
        price+=p[i];
    }
    cout << price << endl;
    return 0;
}

