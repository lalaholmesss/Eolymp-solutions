#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, sum = 0, count = 0;
	cin >> n;
	vector<int> nums(n);
	bool found;
	for(int i = 0; i < n; i++){
		cin >> nums[i];
	}	
	for(int i = 0; i < n; i++){
		if(nums[i] > 0 && nums[i] % 6 == 0){
			sum = sum + nums[i];
			count = count + 1;
		}		
	}
	cout << count << " " << sum;
	return 0;
}