#include<bits/stdc++.h>

using namespace std;

int main(){
    int x, y;
    cin >> x;

    if(x < -4) y = x + 5;
    else if(x > 7) y = x * x * x + 2 * x;
    else y = x * x - 3 * x;

    cout << y << endl;
}