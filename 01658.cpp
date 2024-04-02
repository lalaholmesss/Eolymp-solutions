#include <iostream>
using namespace std;
long long factorial(long long n);
int main(){
	long long n;

	cin >> n;
	
    	cout <<	factorial(n);	
	
	return 0;
}
long long factorial(long long n){
if(n == 0) return 1;
else{

		
 return n * factorial(n - 1);
	
   }
}