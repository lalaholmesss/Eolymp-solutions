#include<bits/stdc++.h>

using namespace std;

int main(){
    double a, b, c;
    cin >> a >> b >> c;

    double p = a + b + c;
    double area = sqrt((p / 2) * (p / 2 - a) * (p / 2 - b) * (p / 2 - c));

    double ha = area * 2 / a;
    double hb = area * 2 / b;
    double hc = area * 2 / c;
    cout << fixed << setprecision(2) << ha << " ";
    cout << fixed << setprecision(2) << hb << " ";
    cout << fixed << setprecision(2) << hc << endl;
}