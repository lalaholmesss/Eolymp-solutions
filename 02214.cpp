#include<iostream>
using namespace std;

long long my_gcd(long long a, long long b){
    if(b == 0) return a;
    return my_gcd(b, a % b);
}

int main(){
    long long m, n;
    cin >> m >> n;
    cout << my_gcd(m, n) << endl;

    return 0;
}