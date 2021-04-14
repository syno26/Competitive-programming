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
    int q;
    vector<int> A;

    cin >> q;

    int operation, n;
    for(int i=0;i<q;++i){
        cin >> operation;
        if(operation==2){
            A.pop_back();
        }
        else{
            cin >> n;
        }
        if(operation==0){
            A.push_back(n);
        }
        else if(operation==1){
            cout << A[n] << endl;
        }
    }

    return 0;
}
