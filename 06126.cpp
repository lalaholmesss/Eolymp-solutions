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
if(i - t != 0){ 
			cout << a[t] << endl;
			t++;	}
else cout << "error" << endl;		
		}
		
		else if(s == "front"){
if(i - t != 0){
			cout << a[t] << endl;}
else cout << "error" << endl;
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
			break;
		}
	}
	
	return 0;
	
}