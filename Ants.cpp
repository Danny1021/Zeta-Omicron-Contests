#include <iostream>
#include <vector>
//#include <sstream>
//#include <numeric>
//#include <string>
#include <algorithm>
//#include <math.h>
//#include <regex>
//#include <map>
#include <set>

using namespace std;

int main() {

    int cases;
    cin >> cases;

    while (cases --> 0) {

        int len, totAnt;
        cin >> len >> totAnt;

        vector<int> ants(totAnt);

        for (int i = 0; i < totAnt; i++)
            cin >> ants[i];

        sort(ants.begin(), ants.end());

        int minDist, maxDist, lowerHalf = 0, upperHalf;

        maxDist = max(len - *ants.begin(), *ants.rbegin());

        int ind = -1;
        for (int i = 0; i < totAnt; i++) {
            if (ants[i] > len/2) {
                ind = i;
                break;
            }
        }

        if (ind == -1) {
            upperHalf = 0;
            lowerHalf = *ants.rbegin();
        }
        else if (ind-1 < 0) {
            lowerHalf = 0;
            upperHalf = len - ants[ind];
        }
        else {
            lowerHalf = ants[ind - 1];
            upperHalf = len - ants[ind];
        }

        minDist = max(lowerHalf, upperHalf);

        cout << minDist << " " << maxDist << endl;

    }

    return 0;
}
