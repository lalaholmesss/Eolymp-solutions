#include<iostream>
using namespace std;

long long my_gcd(long long a, long long b){
	if(b == 0) return a;
	return my_gcd(b, a % b);
}
int main(){
	long long n;
	long long G;
	
	while(1){
		cin >> n;
		if(n == 0) break;
		
		G = 0;
		
		for(int i = 1; i < n; i++){
			for(int j = i + 1; j <= n; j++){
				G += my_gcd(i, j);
			}
		}
		cout << G << endl;
	}
	
	return 0;
}