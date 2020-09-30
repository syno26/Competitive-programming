#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <iomanip>
#include <math.h>
#include <climits>

using namespace std;

int main(void)
{
    long n, minimum, maximum, sum, x;
    minimum = INT_MAX;
    maximum = INT_MIN;
    sum = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum += x;
        minimum = min(minimum, x);
        maximum = max(maximum, x);
    }

    cout << minimum << " " << maximum << " " << sum << endl;

    return 0;
}
