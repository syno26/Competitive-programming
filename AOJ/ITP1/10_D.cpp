#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <iomanip>
#include <math.h>
#include <climits>
#include <stack>
#include <string>

#define MPI 3.14159265358979323846

using namespace std;

int main(void)
{
    int n;
    vector<int> x, y;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int tmp;
        cin >> tmp;
        x.push_back(tmp);
    }
    for (int i = 0; i < n; ++i)
    {
        int tmp;
        cin >> tmp;
        y.push_back(tmp);
    }

    for (int p = 1; p < 4; ++p)
    {
        double D = 0;
        for (int count = 0; count < n; ++count)
        {
            D += pow(abs(x[count] - y[count]), p);
        }
        D = pow(D, 1 / double(p));
        cout << fixed << setprecision(6) << D << endl;
    }

    int index, max = 0;
    for (int count = 0; count < n; ++count)
    {
        int tmp;
        tmp = abs(x[count] - y[count]);
        if (max < tmp)
        {
            max = tmp;
            index = count;
        }
    }
    cout << double(abs(x[index] - y[index])) << endl;

    return 0;
}
