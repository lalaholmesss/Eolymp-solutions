#include<iostream>
#include<cmath>

using namespace std;

int main(){
    long long m, n;
    while(cin >> m >> n){
        if(m == 0){
            cout << n + 1 << endl;
        }else if(m == 1){
            cout << n + 2 << endl;
        }else if(m == 2){
            cout << 2 * n + 3 << endl;
        }else{
            cout << (1 << (n + 3)) - 3 << endl;
        }
    }
}