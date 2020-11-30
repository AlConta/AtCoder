#include<iostream>
#include<vector>
using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)
#define Rep(i, a, b) for(int i = a; i <= b; i++)
#define sz(s) (int)s.size()

const int dX[4] = { 1, 0, -1, 0 };
const int dY[4] = { 0, 1, 0, -1 };

int getTwoPointDistance(int x1, int y1, int x2, int y2) {
    return (abs(x1-x2) + abs(y1-y2));
}

bool matchOddEven(int t1, int t2) {
    if (t1 % 2 == 0 && t2 % 2 == 0) return true;
    else if (t1 % 2 != 0 && t2 % 2 != 0) return true;
    return false;
}

int main() {
    int N;
    cin >> N;
    int preT(0), preX(0), preY(0);
    bool bGoal = true;
    rep(i, 0, N) {
        int t, x, y;
        cin >> t >> x >> y;
        int d = getTwoPointDistance(preX, preY, x, y);
        if (d <= (t - preT) && matchOddEven(d, t - preT)) {
            preT = t;
            preX = x;
            preY = y;
        }
        else {
            bGoal = false;
            break;
        }
    }
    if (bGoal) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}