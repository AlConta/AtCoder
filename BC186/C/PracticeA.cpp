#include<iostream>
#include<vector>
using namespace std;

#pragma warning(disable:4996)

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

constexpr int MAXN = 10001;
int main() {
    int N;
    cin >> N;
    int cnt = N;
    Rep(i, 1, N) {
        char str10[10];
        char str8[10];
        sprintf(str10, "%d", i);
        sprintf(str8, "%o", i);
        bool find7 = false;
        rep(j,0,6) {
            if (str10[j] == '7') find7 = true;
            if (find7) break;
        }
        if (!find7) {
            rep(j, 0, 7) {
                if (str8[j] == '7') find7 = true;
                if (find7) break;
            }
        }
        if (find7) cnt--;
    }

    cout << cnt << "\n";
    return 0;
}
