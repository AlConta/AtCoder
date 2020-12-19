#include<iostream>
#include<vector>
#include <numeric>
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

int gcd(int a, int b)
{
    if (a % b == 0) return(b);
    else return(gcd(b, a % b));
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

constexpr ll MAXN = 1000000010;
int main() {
    int N, M;
    cin >> N >> M;
    vector<ll> blue(MAXN);
    vector<ll> white;
    int startW = 0, endW = 0;
    int lem = -1;
    if (M == 0) white[0] = N;
    else {
        rep(i, 0, M) {
            cin >> blue[i];
            endW = blue[i] - 1;
            int div = endW - startW;
            if(div >= 1) white.push_back(div);

            startW = blue[i] + 1;
        }
    }

    cout << N << "\n";
    return 0;
}
