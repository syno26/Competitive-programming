#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <iomanip>
#include <math.h>
#include <climits>
#include <stack>

using namespace std;

int main(void)
{
    int b, f, r, v, n;
    vector<vector<vector<int>>> u(4, vector<vector<int>>(3, vector<int>(10)));

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> b >> f >> r >> v;
        u[b - 1][f - 1][r - 1] += v;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                cout << " " << u[i][j][k];
            }
            cout << endl;
        }
        if (i == 3)
        {
            break;
        }
        cout << "####################" << endl;
    }

    return 0;
}
