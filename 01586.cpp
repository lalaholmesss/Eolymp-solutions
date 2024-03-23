#include<bits/stdc++.h>
using namespace std;
int main(){
	stack<int> numbers;
	char c;
	while(cin >> c){
		if(isdigit(c)){
			numbers.push(c - '0');
		}
		else{
			int a, b;
			b = numbers.top();
			numbers.pop();
			a = numbers.top();
			numbers.pop();
			if(c == '+'){
				numbers.push(a + b);
			}			
			else if(c == '-'){
				numbers.push(a - b);
			}
			else if(c == '*'){
				numbers.push(a * b);
			}
			
		}
	}
	cout << numbers.top();
}