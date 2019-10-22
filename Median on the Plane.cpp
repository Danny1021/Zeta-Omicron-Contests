#include <iostream>
#include <vector>
#include <sstream>
#include <numeric>
#include <string>
#include <algorithm>
#include <cmath>
#include <regex>
#include <map>
#include <set>
#include <queue>

using namespace std;

bool sortbysec(pair<pair<int, int>, double> p1, pair<pair<int, int>, double> p2) {
    return (p1.second < p2.second);
}

double findAngle(pair<int, int> p1, pair<int, int> p2) {
    pair<int, int> point = make_pair(p2.first - p1.first, p2.second - p1.second);
    return atan2(p2.second - p1.second, p2.first - p1.first);
}

int main() {

    int pts;
    cin >> pts;
    vector<pair<int, int>> og;
    vector<pair<int, int>> points;

    while (pts --> 0) {
        int a;
        int b;
        cin >> a >> b;
        og.push_back(make_pair(a, b));
        points.push_back(make_pair(a, b));
    }

    sort(points.begin(), points.end());

    vector<pair<pair<int, int>, double>> angles;

    for (int i = 1; i < points.size(); i++) {
        pair<pair<int, int>, double> ang = make_pair(points[i], findAngle(points[0], points[i]));
        angles.push_back(ang);
    }

    sort(angles.begin(), angles.end(), sortbysec);

    pair<int, int> p1 = points[0];
    pair<int, int> p2 = angles[angles.size()/2].first;
    int pt1, pt2;

    for (int i = 0; i < og.size(); i++) {
        if (og[i].first == p1.first && og[i].second == p1.second)
            pt1 = i;
        if (og[i].first == p2.first && og[i].second == p2.second)
            pt2 = i;
    }

    int first = min(pt1, pt2);
    int second = max(pt1, pt2);

    cout << first+1 << " " << second+1;

    return 0;
}
