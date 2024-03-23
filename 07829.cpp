#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<float> nums(n);
	float sum = 0;
	for(int i = 0; i < n; i++){
		cin >> nums[i];
	}
	for(int i = 0; i < n; i ++){
		sum = sum + nums[i];
	}
	cout << fixed << setprecision(1) << sum;
}