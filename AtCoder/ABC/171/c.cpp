#include <bits/stdc++.h>
using namespace std;

void f(long long N)
{
    if(N==0)
        return;
    N--;
    f(N/26);
    cout << char('a'+(N%26));    
}

int main(void)
{
    long long N;
    long long x;
    cin >> N;
    f(N);
    
    cout << endl;
    return 0;
}
