#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void)
{
    vector<long> x(3);
    cin >> x[0] >> x[1] >> x[2];

    sort(x.begin(),x.end());

    cout << x[0] << " " << x[1] << " " << x[2] << endl; 
    
    return 0;
}
