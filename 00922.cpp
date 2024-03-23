#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int> nums(n);
	
	for(int i = 0; i < n; i++){
		cin >> nums[i];	
	}
	int temp = nums[n - 1];
	nums.pop_back();
	nums.insert(nums.begin(), temp);
	for(int i = 0; i < n; i++) cout << nums[i] << " ";
}