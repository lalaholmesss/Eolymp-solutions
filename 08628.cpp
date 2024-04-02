#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;

    string res = "YES";
    for(int i = 0; i < 4; i++){
        int n = s[i] - '0';
        if(n % 2 == 1) res = "NO";
    }
    cout << res << endl;
}