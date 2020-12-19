#include<iostream>
#include<vector>
#include<tuple>
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


int main() {
    int T;
    cin >> T;

    vector<tuple<ll, ll, ll>> vTP;
    rep(i, 0, T) {
        ll N, S, K;
        cin >> N >> S >> K;
        tuple<ll, ll, ll> tp = make_tuple(N,S,K);
        vTP.push_back(tp);

        bool bErr = false;
        while (1) {
            for(int j = 0; j=)
        }
    }

    cout << N << "\n";
    return 0;
}
