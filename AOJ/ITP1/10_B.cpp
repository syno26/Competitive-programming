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
    double a, b, C, S, L, h, x;
    cin >> a >> b >> C;

    S = a * b * sin(C * MPI / 180.0) / 2.0;
    x = sqrt(pow(b * cos(C * MPI / 180.0) - a, 2) + pow(b * sin(C * MPI / 180.0), 2));
    L = a + b + x;
    h = b * sin(C * MPI / 180.0);
    cout << fixed << setprecision(8) << S << endl;
    cout << fixed << setprecision(8) << L << endl;
    cout << fixed << setprecision(8) << h << endl;

    return 0;
}
