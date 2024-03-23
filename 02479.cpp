#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; 
	string line;
	cin >> n;
        getline(cin, line);
	for(int i = 0; i < n; i++){
		getline(cin, line);
		bool without_problems = true;
		stack<char> smth;
		for(int j = 0; j < line.length(); j++){
			char c = line[j];
			if(c == '(' || c == '['){
				smth.push(c);
			}
			else if(c == ')'){
                                if(smth.empty() || smth.top() != '('){
                                        without_problems = false;
					break;   
                               }    
				else smth.pop();
			}
			else if(c == ']'){
				 if(smth.empty() || smth.top() != '['){
                                        without_problems = false;
					break;   
                                                     }    
				else smth.pop();
		}
		}
		   if(without_problems && smth.empty()) cout << "Yes" << endl;
	                  	else cout << "No" << endl;
	}
}