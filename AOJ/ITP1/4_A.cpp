#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <iomanip>

using namespace std;

int main(void)
{
    long a, b, d, r;
    double f;

    cin >> a >> b;

    d = a / b;
    r = a % b;
    f = double(a) / double(b);

    cout << d << " " << r << " " << fixed << setprecision(12) << f << endl;

    return 0;
}
