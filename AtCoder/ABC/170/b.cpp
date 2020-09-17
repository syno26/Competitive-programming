#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int a, b, x, y;
    cin >> x >> y;
    for (b = x; b >= 0; b--)
    {
        a = x - b;
        if (2 * a + 4 * b == y)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
