#include<bits/stdc++.h>

using namespace std;

int main(){
    long long a1, n;
    cin >> a1 >> n;

    for(int i = 0; i < n - 1; i++) a1 = (a1 * a1) % 10000;
    cout << a1;

    return 0;
}