#include<iostream>
#include<vector>
#include<algorithm>
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
    vector<ll> vecA;

    Rep(i, 1, N) {
        int a;
        cin >> a; 
        vecA.push_back(a);
    }
    sort(vecA.begin(), vecA.end());
    ll total = 0;
    ll lastS = 0;
    rep(i, 0, N) {
        total += vecA[i] * i;
        total -= lastS;
        lastS += vecA[i];
    }

    cout << total << "\n";
    return 0;
}
