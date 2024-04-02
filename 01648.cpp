#include<iostream>
using namespace std;

long long fenwick(long long a){
    if (a % 2 == 1) return 0;
    return 1 + fenwick(a / 2);
}

int main(){
    long long x;
    cin >> x;
    cout << (1 << fenwick(x)) << endl;

    return 0;
}