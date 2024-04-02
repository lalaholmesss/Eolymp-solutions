#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int limit = sqrt(n);
    stack<int> complementary;
    int k;

    for(int i = 1; i <= limit; i++){
        if(n % i == 0){
            if(i % 2 == 1) cout << i << endl;
            k = n / i;
            if(k % 2 == 1 && k != i) complementary.push(k);
        }
    }

    while(!complementary.empty()){
            cout << complementary.top() << endl;
            complementary.pop();
    }

    return 0;
}