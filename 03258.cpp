#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> fibo;
    fibo.push_back(0);
    fibo.push_back(1);
    for(int i = 0; i < 41; i++){
        fibo.push_back(fibo[i] + fibo[i + 1]);
    }

    int n;
    cin >> n;
    cout << fibo[n] << endl;

    return 0;
}