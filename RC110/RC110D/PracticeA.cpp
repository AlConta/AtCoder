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

constexpr int NUM = 2005;
vector<int> mapA(NUM);
int SUM_A=0;
ll getC(int orderA, int offsetA, int offsetB, int M, ll amari) {
    int A = mapA[orderA];
    int minB = A;
    int maxB = M - offsetB - (SUM_A - (offsetA + A));
    if (minB <= maxB) {
        for (int i = minB; i <= maxB; i++) {
            int bi = i;
            ll conbi = 

        }
    }
}
int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(NUM);
    rep(i, 0, N) {
        cin >> A[i];
        SUM_A += A[i];
    }

    cout << N << "\n";
    return 0;
}
