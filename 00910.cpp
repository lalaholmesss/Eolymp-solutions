#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, count = 0;
float sum = 0;
	cin >> n;
	vector<float> nums(n);
	for(int i = 0; i < n; i++){
		cin >> nums[i];
	}	
	for(int i = 0; i < n; i++){
		if(nums[i] > 0){
			sum = sum + nums[i];
			count = count + 1;	
		}		
	}
	if(count > 0) cout << fixed << setprecision(2) << sum / count;
	else cout << "Not Found";
	 
	return 0;
}