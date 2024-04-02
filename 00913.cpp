#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;

    double a, b;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        cout << fixed << setprecision(4) << a + b << " " << setprecision(4) << a * b << endl;
    }

    return 0;
}