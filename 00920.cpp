#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double x, y, z;
	cin >> x >> y >> z;
	cout << fixed << setprecision(2) << min(min(max(x, y), max(y, z)), x + y + z) << endl;
	return 0;
}