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

int getUseBattery(int start, int end) {
    return (end - start);
}

constexpr ll DIV = 12;
constexpr ll MAXL = 210;
int main() {
    int L;
    cin >> L;

    ll dp[DIV][MAXL] = {0};
    dp[0][0] = 0;

    for(int i=0; i< DIV; i++){
        for (int j = 1; j <= L; j++) {
            dp[i + 1][j] += dp[i][j];
            DIV - i
            if(L dp[i + 1][j] = max(dp[i][j-]);
        }
    }

    if (err) {
        cout << "No\n";
    }
    else {
        cout << "Yes\n";
    }
    return 0;
}
