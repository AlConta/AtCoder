#include<iostream>
#include<vector>
using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)
#define Rep(i, a, b) for(int i = a; i <= b; i++)
#define sz(s) (int)s.size()

const string STAY = "stay";
typedef long long ll;
int main() {
    int N;
    cin >> N;
    ll past = 0;
    rep(i, 0, N) {
        ll a;
        cin >> a;
        ll da = a - past;
        if (i > 0) {
            if (da == 0) printf("stay\n");
            else if (da < 0) printf("down %lld\n", llabs(da));
            else printf("up %lld\n", llabs(da));
        }
        past = a;
    }

    return 0;
}