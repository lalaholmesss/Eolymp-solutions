#include<bits/stdc++.h>
using namespace std;
int main(){
	char c;
	vector<double> nums;
	int product = 1;
        int sum = 0;
	while(cin >> c){
		nums.push_back(c - '0');
	}
	for(int i = 0; i < nums.size(); i++){
        product *= nums[i];
        sum += nums[i];
        }  
		

	cout << fixed << setprecision(3) << product /(double)sum << endl;
}