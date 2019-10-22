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

int main() {

    int size;
    cin >> size;

    vector<int> ans;

    for (int i = 0; i < size; i++) {
        int n;
        cin >> n;
        if (i == 0) {
            ans.push_back(n);
            continue;
        }
        if (n > ans[ans.size() - 1])
            ans.push_back(n);
    }

    cout << ans.size() << endl;

    for (int n : ans)
        cout << n << " ";

    return 0;
}
