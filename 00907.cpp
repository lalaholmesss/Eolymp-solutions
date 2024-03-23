#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, first = 0;
	cin >> n;
	vector<float> nums(n);
	bool found;
	for(int i = 0; i < n; i++){
		cin >> nums[i];
	}	
	for(int i = 0; i < n; i++){
		if(nums[i] <= 2.5){
			cout << i + 1 << " " << fixed << setprecision(2) << nums[i];
			found = true;
			break;
		}	
		else found = false;
	}
	if(!found) cout << "Not Found" ;
	return 0;
}