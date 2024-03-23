#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<float> nums(n);
	
	for(int i = 0; i < n; i++){
		cin >> nums[i];
		
	}

	float min = nums[0];
	for(int i = 0; i < n; i++){
		if(min > nums[i]){
			min = nums[i];
		}
		
	}
	cout << min * 2;
}