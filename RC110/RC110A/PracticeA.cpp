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

ll gcd(ll x, ll y) { return ( x % y )? gcd(y, x % y): y;}
ll lcm(ll x, ll y) { return x / gcd( x, y) * y; }

int main() {
    int N;
    cin >> N;

    vector<int> vOdd;
    ll lastLcm = lcm(1, 2);
    for(int i= 3; i<=N; i++){
        lastLcm = lcm(lastLcm, i);
    }

    cout << lastLcm + 1 << "\n";
    //Rep(i, 2, N) {
    //    cout << (lastLcm + 1) % i << "\n";
    //}
    return 0;
}
