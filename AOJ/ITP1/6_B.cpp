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
    int n;
    string m;
    vector<vector<bool>> card(4, vector<bool>(13, false));

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int im, ik;

        cin >> m >> ik;
        switch (m[0])
        {
        case 'S':
            im = 0;
            break;
        case 'H':
            im = 1;
            break;
        case 'C':
            im = 2;
            break;
        case 'D':
            im = 3;
            break;
        default:
            break;
        }
        card[im][ik - 1] = true;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            if (!card[i][j])
            {
                switch (i)
                {
                case 0:
                    m = 'S';
                    break;
                case 1:
                    m = 'H';
                    break;
                case 2:
                    m = 'C';
                    break;
                case 3:
                    m = 'D';
                    break;
                default:
                    break;
                }
                cout << m << " " << j + 1 << endl;
            }
        }
    }

    return 0;
}
