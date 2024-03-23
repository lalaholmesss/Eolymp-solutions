#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	long long n, k, m;
	vector<deque<long long>> wow(150001);
	
	cin >> n;
	for(long long i = 0; i < n; i++){
		while(cin >> s){
			if(s == "pushfront"){
				cin >> k;
				cin >> m;
				wow[k].push_front(m);
			}
			
			else if(s == "pushback"){
				cin >> k;
				cin >> m;
				wow[k].push_back(m);
			}
			
			else if(s == "popfront"){
				cin >> k;
				cout << wow[k].front() << endl;
				wow[k].pop_front();	
				
				
			}
			
			else if(s == "popback"){
				cin >> k;
				cout << wow[k].back() << endl;
				wow[k].pop_back();
				
				
			}
		}
	}
	
	return 0;
	
}