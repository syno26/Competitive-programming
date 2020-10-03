#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <iomanip>
#include <math.h>
#include <climits>

void check_num(int, int, int);
void include3(int, int, int);
void end_check_num(int, int, int);

using namespace std;

int main(void)
{
    int i, x, n;
    i = 0;

    cin >> n;

    while (++i <= n)
    {
        x = i;
        if (x % 3 == 0)
        {
            cout << " " << i;
            continue;
        }
        while (x)
        {
            if (x % 10 == 3)
            {
                cout << " " << i;
                x = 0;
                continue;
            }
            x /= 10;
        }
    }
    cout << endl;

    return 0;
}
