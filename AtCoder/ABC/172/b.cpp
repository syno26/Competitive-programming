#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int count=0;
    string S,T;
    cin >> S;
    cin >> T;

    for(int i=0;i<(int)S.size();i++)
    {
        if(S[i]!=T[i]) count++;
    }
    cout << count << endl;

    return 0;
}
