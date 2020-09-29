#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <iomanip>
#include <math.h>

using namespace std;

int main(void)
{
    double r;

    cin >> r;

    cout << fixed << setprecision(12) << M_PI * r * r << " " << fixed << setprecision(12) << 2 * M_PI * r << endl;

    return 0;
}
