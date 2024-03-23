#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    bool retake_input = true;
    while(1){
        if(retake_input){
            cin >> n;
            retake_input = false;
        }

        if(n == 0) break;
        vector<int> numbers(n);
        for(int i = 0; i < n; i++){
            cin >> numbers[i];
            if(numbers[i] == 0) break;
        }
        if(numbers[0] == 0){
            cout << "\n" << endl;
            retake_input = true;
            continue;
        }

        vector<bool> checked(n + 1, false);
        int expected = numbers[0];
        checked[expected] = true;
        bool without_problems = true;

        for(int i = 1; i < n; i++){
            while(checked[expected] == true) expected--;
            if(numbers[i] >= expected){
                expected = numbers[i];
                checked[expected] = true;
            }else{
                without_problems = false;
                break;
            }
        }
        if(without_problems) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

}