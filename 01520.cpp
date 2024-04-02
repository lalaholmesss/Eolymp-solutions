#include<iostream>
using namespace std;

long long sum_of_odd_divisors(long long n){
	if(n == 0) return 0;
	long long HasanIsgandarli = (n + 1) / 2;
	return HasanIsgandarli * HasanIsgandarli + sum_of_odd_divisors(n / 2);
}

int main(){
	long long n;
	while(cin >> n){
		cout << sum_of_odd_divisors(n) << endl;
	}
	return 0;
}