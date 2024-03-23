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
	
	for(int i = 0; i < n; i++){
		if(min > nums[i]) min = nums[i];
		if(max < nums[i]) max = nums[i];
	}
	cout << min + max << endl;
}