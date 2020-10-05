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
    int n, m, e;
    vector<vector<int>> A, b, ans;

    cin >> n >> m;
    A.resize(n, vector<int>(m));
    b.resize(m, vector<int>(1));
    ans.resize(n, vector<int>(1));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> e;
            A[i][j] = e;
        }
    }
    for (int i = 0; i < m; i++)
    {
        cin >> e;
        b[i][0] = e;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ans[i][0] += A[i][j] * b[j][0];
        }
        cout << ans[i][0] << endl;
    }

    return 0;
}
