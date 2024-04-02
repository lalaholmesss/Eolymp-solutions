#include<iostream>
using namespace std;

long long powermod(long long a, long long b, long long m, long long result=1){
    if(b % 2 != 0) result = (result * a) % m;

    if(b == 0) return result % m;
    return powermod((a * a) % m, b / 2, m, result);
}

int main(){
    long long a, b, m;
    cin >> a >> b >> m;

    cout << powermod(a % m, b, m) << endl;
    return 0;
}