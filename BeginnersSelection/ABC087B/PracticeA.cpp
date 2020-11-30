#include<iostream>
#include<vector>

using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)
#define Rep(i, a, b) for(int i = a; i <= b; i++)
#define sz(s) (int)s.size()

int main() {
    int A, B, C, X;
    cin >> A >> B >> C >> X;

    int count = 0;
    rep(i, 0, A+1) {
        rep(j, 0, B+1) {
            rep(k, 0, C+1) {
                int sum = 500 * i + 100 * j + 50 * k;
                if (sum == X) count++;
            }
        }
    }

    cout << count << "\n";

    return 0;
}