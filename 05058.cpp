#include<bits/stdc++.h>
using namespace std;
int main(){
	
	string line;
	
        getline(cin, line);
	
	
		bool without_problems = true;
		stack<char> smth;
		for(int j = 0; j < line.length(); j++){
			char c = line[j];
			if(c == '(' || c == '[' || c == '{'){
				smth.push(c);
			}
			else if(c == ')'){
                                if(smth.empty() || smth.top() != '('){
                                        without_problems = false;
					break;   
                               }    
				else smth.pop();}
			
				else if(c == '}'){
                                if(smth.empty() || smth.top() != '{'){
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
		   if(without_problems && smth.empty()) cout << "yes" << endl;
	                  	else cout << "no" << endl;
	
}
