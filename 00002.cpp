#include <iostream>
using namespace std;
int main(){
	long a;
	int i = 0;
	cin >> a;
	do{
		a = a / 10;
		i = i + 1;
	}while(a > 0);
	cout << i << endl;

	return 0;
}