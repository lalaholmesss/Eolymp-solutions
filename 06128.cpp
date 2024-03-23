#include <iostream>
#include <queue>
using namespace std;

int main(){
	string s;
	int k;
	deque<int> wow;
	
	while(cin >> s){

		if(s == "push_front"){
cin >> k;
		wow.push_front(k);
			cout << "ok" << endl;
		}
		
		else if(s == "push_back"){
cin >> k;
		wow.push_back(k);
			cout << "ok" << endl;		
		}
		
		else if(s == "pop_front"){
			if(!wow.empty()){cout << wow.front() << endl;
 wow.pop_front();
			}
			else cout << "error";
			
		}
		else if(s == "pop_back"){
			if(!wow.empty()){	cout << wow.back() << endl;
wow.pop_back();
			}
			else cout << "error";
		}
		else if(s == "front"){
			if(!wow.empty())	cout << wow.front() << endl;
				else cout << "error" << endl;
		
		}
		else if(s == "back"){
		if(!wow.empty())	cout << wow.back() << endl;
		else cout << "error" << endl;
		}
		else if(s == "size"){
			cout << wow.size() << endl;
		}
		else if(s == "clear"){
			wow.clear();
			cout << "ok" << endl;
		}
		else if(s == "exit"){
			cout << "bye" << endl;
			break;
		}
	}
	
	return 0;
	
}