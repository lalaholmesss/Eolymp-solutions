#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int> nums(n);

	for(int i = 0; i < n; i++){
		cin >> nums[i];
	}
	int max = nums[0];
	int min = nums[0];
	for(int i = 1; i < n; i ++){
		if(max < nums[i]) max = nums[i];
		if(min > nums[i]) min = nums[i];
	}
	for(int i = 0; i < n; i++){
		if(nums[i] == max) nums[i] = min;
		else if(nums[i] == min) nums[i] = max;
	}
	
	for(int i = 0; i < n; i++) cout << nums[i] << " ";
	cout << endl;
}