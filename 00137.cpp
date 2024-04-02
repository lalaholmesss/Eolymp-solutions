#include<iostream>
#include<vector>
using namespace std;

int my_gcd(int a, int b){
	if(b == 0) 	return a;	
	return my_gcd(b, a % b);
}

int main(){
	int n;
	cin >> n;
	
	vector<int> arr(n);
	
	for(int i = 0; i < n; i++) cin >> arr[i];
	
	int result = my_gcd(arr[0], arr[1]);
	
	for(int i = 2; i < n; i++) result = my_gcd(result, arr[i]);
	cout << result;
	return 0;
}