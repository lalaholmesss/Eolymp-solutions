#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> role;
    string s;
    int n;
    
    while (cin >> s) {
        if (s == "push") {
            cin >> n;
            role.push(n);
            cout << "ok" << endl;
        }
        else if (s == "pop") {
            if (!role.empty()) {
                cout << role.top() << endl;
                role.pop();
            } else {
                cout << "error" << endl;
            }
        }
        else if (s == "back") {
            if (!role.empty()) {
                cout << role.top() << endl;
            } else {
                cout << "error" << endl;
            }
        }
        else if (s == "size") {
            cout << role.size() << endl;
        }
        else if (s == "clear") {
            role = stack<int>();
            cout << "ok" << endl;
        }
        else if (s == "exit") {
            cout << "bye" << endl;
            break;
        }
      
        }
    
    
    return 0;
}