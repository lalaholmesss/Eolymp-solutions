#include<iostream>
using namespace std;

long long f91(long long x){
    if(x >= 101) return x - 10;
    return f91(f91(x + 11));
}

int main(){
    long long x;
    cin >> x;
    cout << f91(x) << endl;

    return 0;
}