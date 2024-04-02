#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

// https://oeis.org/A006579
// https://oeis.org/A018804

#define LIMIT 4000001
long long TotientArray[LIMIT];

void CalculateTotient()
{
	for (int i = 2; i < LIMIT; i++) TotientArray[i] = i;
	for (int i = 2; i < LIMIT; i += 2) TotientArray[i] /= 2;
	for (int i = 3; i < LIMIT; i += 2)
            if (TotientArray[i] == i)
                for (int j = i; j < LIMIT; j += i)
                    TotientArray[j] -= TotientArray[j] / i;
}

int main(){
	CalculateTotient();
	vector<long long> GcdSums(LIMIT);
	for(int i = 0; i < LIMIT; i++) GcdSums[i] = TotientArray[i];

	for(int i = 2; i <= sqrt(LIMIT); i++){
            GcdSums[i * i] += i * TotientArray[i];
            for(int j = i * i + i; j < LIMIT; j += i){
                GcdSums[j] += i * TotientArray[j / i];
                GcdSums[j] += (j / i) * TotientArray[i];
            }
	}

	for (int i = 3; i < LIMIT; i++) GcdSums[i] += GcdSums[i - 1];

	long long n;
	while(cin >> n){
            if(n == 0) break;
            cout << GcdSums[n] << endl;
	}
	return 0;
}