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
    double m, bunsan;

    while (1)
    {
        cin >> n;
        if(n==0) return 0;
        m = 0;
        bunsan = 0;
        vector<int> s;

        for (int i = 0; i < n; ++i)
        {
            int tmp;
            cin >> tmp;
            s.push_back(tmp);
            m += tmp;
        }
        m /= (double)n;

        for (int i = 0; i < n; ++i)
        {
            bunsan += pow(s[i] - m, 2);
        }
        bunsan /= n;

        cout << fixed << setprecision(8) << sqrt(bunsan) << endl;
    }

    return 0;
}
