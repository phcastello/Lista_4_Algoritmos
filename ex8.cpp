#include<iostream>
using namespace std;

int main(){
    int MmV, MmN, HmV, HmN;
    int h1,h2,m1,m2;

    cin >> h1 >> h2 >> m1 >> m2;
    MmV = max(m1, m2);
    MmN = min(m1, m2);
    HmV = max(h1,h2);
    HmN = min(h1,h2);

    cout << HmV + MmN <<endl;
    cout << HmN * MmV <<endl;

    return 0;
}