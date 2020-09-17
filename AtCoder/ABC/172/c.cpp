#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    long long N,M,K,X,count=0;
    vector<long long> A,B,c;

    cin >> N >> M >> K;
    
    A.push_back(0);
    for(int i=1;i<=N;i++)
    {
        cin >> X;
        A.push_back(X+A[i-1]);
    }
    B.push_back(0);
    for(int i=1;i<=M;i++)
    {
        cin >> X;
        B.push_back(X+B[i-1]);
    }
    int ans=0;
    for(int i=0,j=0;i<=N;i++)
    {
        if(K<A[i])
        {
            break;
        }
        int left=0,right=M,mid;
        while(left<=right)
        {
            mid=(left+right)/2;
            if(A[i]+B[mid]<=K)
            {
                ans=max(i+mid,ans);
                left=mid+1;
            }
            else
            {
                right=mid-1;
            }
        }
    }
    cout << ans << endl;

    return 0;
}
