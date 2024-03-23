#include <iostream>
#include <queue>
using namespace std;

int main(){
	int a[100000], t = 0, i = 0, n;
	string s;
	
	while(cin >> s){
		if(s == "push"){
			cin >> n;
			a[i] = n;
			i++;
			cout << "ok" << endl;
		}
		
		else if(s == "pop"){
			cout << a[t] << endl;
			t++;			
		}
		
		else if(s == "front"){
			cout << a[t] << endl;
		}
		else if(s == "size"){
			cout << i - t << endl;
		}
		else if(s == "clear"){
			t = i;
			cout << "ok" << endl;
		}
		else if(s == "exit"){
			cout << "bye" << endl;
			
	return 0;
		}
	}
	
	
}