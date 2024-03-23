#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<float> nums(n);
	
	for(int i = 0; i < n; i++){
		cin >> nums[i];	
	}
	float sum = 0;
	int count = 0;
	for(int i = 0; i < n; i++){
		if(nums[i] < 0){
			sum = sum + nums[i];
			count++;
		}
		
	}
	cout << count << " " << fixed << setprecision(2) << sum;
}