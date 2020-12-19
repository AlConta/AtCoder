#include<iostream>
#include<vector>
using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)
#define Rep(i, a, b) for(int i = a; i <= b; i++)
#define sz(s) (int)s.size()

const int INF = 1e9;

using ll = long long;

template<class T> bool chmin(T& a, T& b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> bool chmax(T& a, T& b) {
    if (a < b) {
        a = b; return true;
    }
    return false;
}
constexpr int MAXA = 110;

int main() {
    int H, W;
    cin >> H >> W;
    int minA(MAXA), maxA(0);
    vector<vector<int>> M(MAXA, vector<int>(MAXA));
    Rep(i, 1, H) {
        Rep(j, 1, W) {
            cin >> M[i][j];
            minA = std::min(minA, M[i][j]);
            maxA = std::max(maxA, M[i][j]);
        }
    }

    int cnt = 0;
    if (minA < maxA) {
        Rep(i, 1, H) {
            Rep(j, 1, W) {
                cnt += M[i][j] - minA;
            }
        }
    }
    
    cout << cnt << "\n";
    return 0;
}
