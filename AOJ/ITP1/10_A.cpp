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

using namespace std;

int main(void)
{
    double x1, y1, x2, y2, ans;
    cin >> x1 >> y1 >> x2 >> y2;

    ans = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    cout << fixed << setprecision(8) << ans << endl;

    return 0;
}
