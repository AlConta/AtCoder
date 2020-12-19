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

constexpr ll AMAX = 2e5;

int main() {
    int N;
    cin >> N;
    vector<ll> vecA(AMAX);

    Rep(i, 1, N) {
        cin >> vecA[i];
    }

    ll total = 0;
    Rep(i, 1, N) {
        Rep(j, 1, N) {
            if (i < j) {
                total += llabs(vecA[i] - vecA[j]);
            }
        }
    }


    cout << total << "\n";
    return 0;
}
