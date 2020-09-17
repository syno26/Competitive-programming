#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    long long n,q,a,b,c;
    cin >> n;
    long long isum=0;
    long long list[100001]={};

    for(int i=0;i<n;i++)
    {
        cin >> a;
        isum+=a;
        list[a]++;
    }
    cin >> q;
    long long sum[q]={};

    for(int i=0;i<q;i++)
    {
        cin >> b >> c;
        list[c]+=list[b];
        sum[i]=isum+(c-b)*list[b];
        list[b]=0;
        isum=sum[i];
    }
    for(int i=0;i<q;i++)
    {
        cout << sum[i] << endl;
    }
    return 0;
}
