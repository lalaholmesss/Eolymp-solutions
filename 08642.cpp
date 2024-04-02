#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, d, s;
    int start, finish;
    cin >> start >> finish;
    for(int i = start; i <= finish; i++){
        a = i / 1000;
        b = i / 100 % 10;
        c = i / 10 % 10;
        d = i % 10;
        s = a * a * a * a + b * b * b * b + c * c * c * c + d * d * d * d;
        if(s == i) cout << i << " ";
    }
    cout << endl;
}