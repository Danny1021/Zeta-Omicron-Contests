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
#include <fstream>

using namespace std;

int thanosSort(vector<int> n) {

    vector<int> vec = n;
    sort(n.begin(), n.end());

    if (vec == n)
        return vec.size();

    vector<int> vec1, vec2;

    for (int i = 0; i < vec.size()/2; i++)
        vec1.push_back(vec[i]);
    for (int i = vec.size()/2; i < vec.size(); i++)
        vec2.push_back(vec[i]);

    return max(thanosSort(vec1), thanosSort(vec2));
}

int main() {

    int size;
    cin >> size;

    vector<int> nums;

    for (int i = 0; i < size; i++) {
        int n;
        cin >> n;
        nums.push_back(n);
    }

    int ans = thanosSort(nums);

    cout << ans;

    return 0;
}
