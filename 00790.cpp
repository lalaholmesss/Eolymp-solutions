#include<iostream>
#include<set>
#include<string>


using namespace std;


struct person{
    int number, priority;

    bool operator < (const person& other) const {
        return priority < other.priority;
    }
};

int main(){
    set<person> people;
    std::set<int> s;
    person temp;

    int req, k, p;
    while(cin >> req){
        switch(req){
            case 0: {
                return 0;
            }
            case 1: {
                cin >> k >> p;
                temp.number = k;
                temp.priority = p;
                people.insert(temp);
                break;
            }
            case 3: {
                if(people.empty()){
                    cout << 0 << endl;
                    continue;
                }
                int x = people.begin()->number;
                people.erase(people.begin());
                cout << x << endl;
                break;
            }
            case 2: {
                if(people.empty()){
                    cout << 0 << endl;
                    continue;
                }
                auto it = people.end();
                it--;
                int x = it->number;
                people.erase(it);
                cout << x << endl;
                break;
            }
        }
    }
}