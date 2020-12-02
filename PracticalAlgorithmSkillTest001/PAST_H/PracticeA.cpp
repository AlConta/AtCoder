#include<iostream>
#include<vector>
using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)
#define Rep(i, a, b) for(int i = a; i <= b; i++)
#define sz(s) (int)s.size()

const int INF = 1e9;

using ll = long long;

template<class T> bool chmin(T &a, T &b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> bool chmax(T &a, T &b) {
    if (a < b) {
        a = b; return true;
    }
    return false;
}
const int MAX = 200005;

vector<int> cards(200005);
vector<int> sellsCards(200005);

int main() {
    int N, Q;
    cin >> N;

    Rep(i, 1, N) {
        cin >> cards[i];
    }

    int cntOdd = N - N / 2;
    int mi[2] = { INF, INF };
    int div[2] = {0, 0};
    Rep(i, 1, N) {
        chmin(mi[i % 2], cards[i]);
    }
    cin >> Q;

    ll ans = 0;
    rep(i, 0, Q) {
        int order, x, a;
        cin >> order;

        if (order == 1) {
            cin >> x >> a;
            if (a <= cards[x] - div[x % 2]) {
                ans += a;
                cards[x] -= a;
                chmin(mi[x%2], cards[x]);
            }
        }
        else if (order == 2) {
            cin >> a;
            if (a <= mi[1] - div[1]) {
                ans += 1LL * a * cntOdd;
                div[1] += a;
            }
        }
        else if (order == 3) {
            cin >> a;
            if (a <= mi[0] - div[0] && a <= mi[1] - div[1]) {
                ans += 1LL * a * N;
                div[0] += a;
                div[1] += a;
            }
        }
    }

    cout << ans << "\n";

    return 0;
}