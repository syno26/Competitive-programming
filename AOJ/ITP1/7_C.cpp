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
    int r, c, i, j;
    vector<vector<int> > table;

    cin >> r >> c;

    table.resize(r + 1, vector<int>(c + 1));

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            int x;
            cin >> x;
            table[i][j] = x;
            table[i][c] += x;
            table[r][j] += x;
        }
        table[r][c] += table[i][c];
    }

    for (i = 0; i < r + 1; i++)
    {
        for (j = 0; j < c + 1; j++)
        {
            cout << table[i][j];
            if(j+1!=c+1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
