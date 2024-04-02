#include<bits/stdc++.h>

using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;
    for(long long i = a; i <= b; i++){
        cout << i * i << " ";
    }
    cout << endl;

    for(long long i = b; i >= a; i--){
        cout << i * i * i << " ";
    }
    cout << endl;
}