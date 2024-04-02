#include <bits/stdc++.h>

using namespace std;

struct Element {
    string id;
    int priority;

    bool operator < (const Element& other) const {
        return priority < other.priority;
    }
};

priority_queue<Element> elements;
unordered_map<string, int> idToPriority;

void add(string id, int priority){
    elements.push(Element{id, priority});
    idToPriority[id] = priority;
}

void pop(){
    while(idToPriority[elements.top().id] != elements.top().priority){
	elements.pop();
    }

    cout << elements.top().id << " " << idToPriority[elements.top().id] << endl;

    idToPriority.erase(elements.top().id);
    elements.pop();
}

void change(string id, int priority){
    idToPriority[id] = priority;
    add(id, priority);
}


int main() {
    string s, i;
    long long p;

    while(cin >> s){
        if(s == "ADD"){
            cin >> i >> p;
            add(i, p);
        }else if(s == "POP"){
            pop();
        }else if(s == "CHANGE"){
            cin >> i >> p;
            change(i, p);
        }
    }

    return 0;
}