#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int answer = 0;
    int toys;
    double price;
    for(int i = 0; i < n; i++){
        cin >> toys >> price;
        if(price < 50) answer += toys;
    }
    cout << answer << endl;
}