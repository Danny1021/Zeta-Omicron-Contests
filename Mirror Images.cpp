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

int main() {

    int cases;
    cin >> cases;

    for (int c = 1; c <= cases; c++) {
        int row, col;
        cin >> row >> col;

        char grid[row][col];
        char mirror[row][col];

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cin >> grid[i][j];
            }
        }

        int k = 0, l = 0;
        for (int i = row-1; i >= 0; i--) {
            for (int j = col-1; j >= 0; j--) {
                mirror[i][j] = grid[k][l];
                l++;
            }
            l = 0;
            k++;
        }

        cout << "Test " << c << endl;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cout << mirror[i][j];
            }
            cout << endl;
        }

    }

    return 0;
}
