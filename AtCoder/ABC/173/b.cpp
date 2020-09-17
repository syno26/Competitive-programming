#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    long N;
    cin >> N;
    string c;
    long C[4]={};
    
    while(N!=0)
    {
        cin >> c;
        if(c == "AC")
        {
            C[0]++;
        }
        else if(c == "WA")
        {
            C[1]++;
        }
        else if(c == "TLE")
        {
            C[2]++;
        }
        else if(c == "RE")
        {
            C[3]++;
        }
        N--;
    }
    cout << "AC x " << C[0] << endl << "WA x " << C[1] << endl << "TLE x " << C[2] << endl << "RE x " << C[3] << endl;
    return 0;
}
