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
    int N;
    vector<int> A;

    cin >> N;
    for(int k=0;k<N;++k){
        int tmp;
        cin >> tmp;
        A.push_back(tmp);
    }

    int i,j;
    for(i=1;i<=N;++i){
        for(int k=0;k<N;++k){
            cout << A[k] << (k==N-1?'\n':' ');
        }

        int v = A[i];
        j=i-1;
        while(j>=0 && A[j]>v){
            A[j+1]=A[j];
            --j;
        }
        A[j+1]=v;
    }

    return 0;
}
