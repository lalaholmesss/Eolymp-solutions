#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int> nums(n);
	
	for(int i = 0; i < n; i++){
		cin >> nums[i];
	}	
	for(int i = 0; i < n; i++){
		if(nums[i] >= 0) 
		nums[i] = nums[i] + 2;
		cout << nums[i] << " ";
	}
	
	return 0;
}