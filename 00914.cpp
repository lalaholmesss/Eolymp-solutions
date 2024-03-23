#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<float> nums(n);
	
	for(int i = 0; i < n; i++){
		cin >> nums[i];
		
	}
	for(int i = 0; i < n; i++){
		nums[i] = abs(nums[i]);
	}
	float max = nums[0];
	for(int i = 0; i < n; i++){
		if(max < nums[i]){
			max = nums[i];
		}
		
	}
	cout << fixed << setprecision(2) << max;
}