#include<bits/stdc++.h>

using namespace std;

struct Time{
    int h, m, s;
};

bool compare_time(Time t2, Time t1){
    if(t1.h > t2.h) return true;
    if(t1.h < t2.h) return false;

    if(t1.m > t2.m) return true;
    if(t1.m < t2.m) return false;

    if(t1.s > t2.s) return true;
    return false;
}


int main(){
    int n;
    cin >> n;
    vector<Time> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i].h >> v[i].m >> v[i].s;
    }

    sort(v.begin(), v.end(), compare_time);

    for(int i = 0; i < n; i++){
        cout << v[i].h << " " << v[i].m << " " << v[i].s << endl;
    }
}