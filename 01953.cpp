#include<bits/stdc++.h>

using namespace std;

bool compare_participant(pair<int, int> p1, pair<int, int> p2){
    if(p1.first > p2.first) return true;
    if(p1.first < p2.first) return false;

    if(p1.second > p2.second) return false;
    return true;
}

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> participants(n);

    for(int i = 0; i < n; i++){
        cin >> participants[i].first;
        participants[i].second = i + 1;
    }

    sort(participants.begin(), participants.end(), compare_participant);
    for(int i = 0; i < n; i++){
        cout << participants[i].second << " ";
    }
    cout << endl;
}