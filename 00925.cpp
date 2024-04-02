#include<bits/stdc++.h>

using namespace std;

struct Point{
    double x, y;
};

double distance(Point p1, Point p2){
    double dx = p1.x - p2.x;
    double dy = p1.y - p2.y;
    double d = dx * dx + dy * dy;
    return sqrt(d);
}

int main(){
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    Point A{x1, y1};
    Point B{x2, y2};
    Point C{x3, y3};

    double AB = distance(A, B);
    double BC = distance(B, C);
    double AC = distance(A, C);

    double perimeter = AB + BC + AC;
    double area = sqrt((perimeter / 2) * (perimeter / 2 - AB) * (perimeter / 2 - BC) * (perimeter / 2 - AC));

    cout << fixed << setprecision(4) << perimeter << " " << fixed << setprecision(4) << area << endl;

    return 0;
}