#include<iostream>
#include<sstream>
#include<vector>
using namespace std;

vector<long long> fibo_cache(200, -1);

long long fibo(long long n){
    if(fibo_cache[n] == -1) fibo_cache[n] = fibo(n - 1) + fibo(n - 2);
    return fibo_cache[n];
}


int main(){
    fibo_cache[0] = 0;
    fibo_cache[1] = 1;
    fibo(199);

    int n;
    cin >> n;
    stringstream buffer;
    for(int i = 0; i < 200; i++){
        buffer << fibo_cache[i];
    }

    char c;
    while(buffer >> c){
        n--;
        if(n == -1){
            cout << c - '0' << endl;
            break;
        }
    }
}