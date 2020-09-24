#include<iostream>

using namespace std;

int main(void)
{
    long s,t,m;
    cin >> s;
    t=s/3600;
    s-=t*3600;
    m=s/60;
    s-=m*60;
    cout << t << ":" << m << ":" << s << endl;
    return 0;
}
