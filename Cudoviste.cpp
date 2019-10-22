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

int countX(char arr[][2]) {
    int count = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (arr[i][j] == 'X')
                count++;
        }
    }
    return count;
}

bool building(char arr[][2]) {
    int check = false;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (arr[i][j] == '#')
                check = true;
        }
    }
    return check;
}

int main() {

    int r, c;
    cin >> r >> c;

    char arr[r][c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }

    char park[2][2];
    int i = 0;
    int j = 0;
    int track = 0;

    int none = 0, one = 0, two = 0, three = 0, four = 0;

    while (track != (r-1)*(c-1)) {
        if (i == r-1) {
            i = 0;
            j++;
        }
        park[0][0] = arr[i][j];
        park[0][1] = arr[i][j+1];
        park[1][0] = arr[i+1][j];
        park[1][1] = arr[i+1][j+1];
        if (!building(park)) {
            int xs = countX(park);
            if (xs == 0)
                none++;
            else if (xs == 1)
                one++;
            else if (xs == 2)
                two++;
            else if (xs == 3)
                three++;
            else
                four++;
        }
        i++;
        track++;
    }

    cout << none << endl << one << endl << two << endl << three << endl << four << endl;

    return 0;
}
